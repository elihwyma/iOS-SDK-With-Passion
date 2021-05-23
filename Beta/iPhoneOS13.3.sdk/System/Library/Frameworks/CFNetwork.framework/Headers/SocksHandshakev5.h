/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface SocksHandshakev5 : SocksHandshake

{
    _Bool _done;
    unsigned long long _state;
    int _numberOfAuthVersionSupported;
    NSMutableSet *_authMethods;
    unsigned char _addressType;
    int _destinationLen;
    NSMutableString *_domainName;
    unsigned char ipaddr[16];
    int _portLen;
    unsigned short _destPort;
    int _usernameLen;
    NSMutableString *_username;
    int _passwordLen;
    NSMutableString *_password;
}

- (id)finish:(int)arg1;
- (_Bool)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
