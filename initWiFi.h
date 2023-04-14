#ifndef initWiFi_h
#define initWiFi_h

bool initWiFi() {
  if(ssid == ""){
    Serial.println("Undefined SSID");
    digitalWrite(buzzPin, LOW);
    delay(200);
    digitalWrite(buzzPin, HIGH);
    delay(200);
    digitalWrite(buzzPin, LOW);
    delay(200);
    digitalWrite(warn_led, HIGH);
    digitalWrite(wifi_led, HIGH);
    return false;
  }

  WiFi.mode(WIFI_STA);
  if (staticip == "yes") {
      localIP.fromString(ip.c_str());
      localGateway.fromString(gateway.c_str());
  }
  
  digitalWrite(buzzPin, LOW);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, HIGH);
  delay(200);
  digitalWrite(buzzPin, HIGH);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  
  if (staticip == "yes") {
      WiFi.config(localIP, localGateway, subnet, dns);
  }
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  if (staticip == "yes") {
    if (!WiFi.config(localIP, localGateway, subnet, dns)){
      Serial.println("STA Failed to configure");
      digitalWrite(buzzPin, LOW);
      digitalWrite(alarm_led, LOW);
      digitalWrite(warn_led, LOW);
      digitalWrite(wifi_led, HIGH);
      delay(50);
      digitalWrite(buzzPin, HIGH);
      digitalWrite(alarm_led, LOW);
      digitalWrite(warn_led, LOW);
      digitalWrite(wifi_led, LOW);
      delay(200);
      digitalWrite(buzzPin, LOW);
      digitalWrite(alarm_led, LOW);
      digitalWrite(warn_led, HIGH);
      digitalWrite(wifi_led, LOW);
      delay(50);
      digitalWrite(buzzPin, HIGH);
      digitalWrite(alarm_led, LOW);
      digitalWrite(warn_led, LOW);
      digitalWrite(wifi_led, LOW);
      delay(200);
      digitalWrite(buzzPin, LOW);
      digitalWrite(alarm_led, HIGH);
      digitalWrite(warn_led, LOW);
      digitalWrite(wifi_led, LOW);
      delay(50);
      digitalWrite(buzzPin, HIGH);
      digitalWrite(alarm_led, LOW);
      digitalWrite(warn_led, LOW);
      digitalWrite(wifi_led, LOW);
      delay(200);
  
      digitalWrite(warn_led, HIGH);
      digitalWrite(wifi_led, HIGH);
      return false;
    }
  }
  if (usepass == "y") {
    WiFi.begin(ssid.c_str(), pass.c_str());
  } else {
    WiFi.begin(ssid.c_str());
  }
  Serial.println("Connecting to WiFi...");
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, HIGH);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, HIGH);
  digitalWrite(wifi_led, LOW);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, HIGH);
  delay(335);
  digitalWrite(alarm_led, LOW);
  digitalWrite(warn_led, LOW);
  digitalWrite(wifi_led, LOW);
  delay(335);

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Connected!");
    Serial.print("RRSI: ");
    Serial.println(WiFi.RSSI());
    Serial.print("IP: ");
    Serial.print(WiFi.localIP());
    Serial.println("");

    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, HIGH);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);
    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, HIGH);
    digitalWrite(wifi_led, LOW);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);
    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, HIGH);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);
    
    digitalWrite(wifi_led, HIGH);
    Serial.println(WiFi.localIP());
    return true;
  }

  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("Not Connected!");

    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, HIGH);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);
    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, HIGH);
    digitalWrite(wifi_led, LOW);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);
    digitalWrite(buzzPin, LOW);
    digitalWrite(alarm_led, HIGH);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(50);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(alarm_led, LOW);
    digitalWrite(warn_led, LOW);
    digitalWrite(wifi_led, LOW);
    delay(200);

    digitalWrite(warn_led, HIGH);
    digitalWrite(wifi_led, HIGH);
    Serial.println("Failed to connect.");
    return false;
  }
  return false;
}

#endif