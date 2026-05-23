### Overview 

This project demonstrates the basic principle that allows the bootmii
jailbreak to work. Due to the signing key that nintendo used for
the wii having a \0 quite early and their use of strcmp() instead
of memcmp() to compare the keys attackers are able to adjust a malformed
binary to conform to those first few bytes. as long as all bytes before the
\0 match, the key will return as valid.


### Build/run 
```make build``` 

```make run```
