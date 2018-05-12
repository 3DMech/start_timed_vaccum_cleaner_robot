
//root page can be accessed only if authentification is ok
void handleRoot() {
  Serial.println("Enter handleRoot");
  String header;

  String content = "<html><H2>start timed vacuum cleaner robot</H2><br>";
  content += "<head><title>RoboVac</title></head>";
  content += "<body bgcolor=\"#d0d0F0\">";
  content += "<style type= \"text/css\">";
  content += ".tg  {border-collapse:collapse;border-spacing:0;}";
  content += ".tg td{font-family:Arial, sans-serif;font-size:14px;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:black;}";
  content += ".tg th{font-family:Arial, sans-serif;font-size:14px;font-weight:normal;padding:10px 5px;border-style:solid;border-width:1px;overflow:hidden;word-break:normal;border-color:black;}";
  content += ".tg .tg-cpu2{border-color:#000000;vertical-align:top}";
  content += "</style>";
  content += "<table class=\"tg\">";
  content += "  <tr>";
  content += "    <th class=\"tg-cpu2\"></th>";
  content += "    <th class=\"tg-cpu2\"><p><a href=\"ir?code=1\">straight</a></p></th>";
  content += "    <th class=\"tg-cpu2\"><p><a href=\"ir?code=5\">auto</a></p></th>";
  content += "  </tr>";
  content += "  <tr>";
  content += "    <td class=\"tg-cpu2\"><p><a href=\"ir?code=3\">left</a></p></td>";
  content += "    <td class=\"tg-cpu2\"><p><a href=\"ir?code=2\">back</a></p></td>";
  content += "    <td class=\"tg-cpu2\"><p><a href=\"ir?code=4\">right</a></p></td>";
  content += "  </tr>";
  content += "</table>";
  /* safe for later use
    content += "<p><a href=\"ir?code=1\">straight</a></p>";
    content += "<p><a href=\"ir?code=2\">back</a></p>";
    content += "<p><a href=\"ir?code=3\">left</a></p>";
    content += "<p><a href=\"ir?code=4\">right</a></p>";
    content += "<p><a href=\"ir?code=5\">auto</a></p>";
  */
  content += "</body></html>";
  server.send(200, "text/html", content);
}
  
//no need authentification
void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

