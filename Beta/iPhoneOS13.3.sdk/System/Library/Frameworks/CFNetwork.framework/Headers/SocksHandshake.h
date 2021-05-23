/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface SocksHandshake : NSObject

{
    _Bool _finished;
    unsigned short _port;
    NSString *_host;
    NSDictionary *_credentials;
}

@property _Bool finished;
@property (retain) NSString *host;
@property unsigned short port;
@property (retain) NSDictionary *credentials;

+ (id)socksHadshakeWithVersion:(int)arg1;

- (id)finish:(int)arg1;
- (_Bool)parse:(const char *)arg1 len:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
