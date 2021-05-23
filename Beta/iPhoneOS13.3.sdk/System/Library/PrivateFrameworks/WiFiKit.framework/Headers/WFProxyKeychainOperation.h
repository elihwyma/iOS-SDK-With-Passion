/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFProxyKeychainOperation : WFOperation

{
    NSString *_password;
    long long _type;
    NSString *_host;
    NSString *_username;
    NSString *_port;
}

@property long long type;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *port;

+ (id)removePasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3;
+ (id)savePassswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4;
+ (id)getPasswordOperationForHost:(id)arg1 port:(id)arg2 username:(id)arg3;

- (void)start;
- (id)initWithHost:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4 type:(long long)arg5;
- (id)_credentialsForProtectionSpace:(id)arg1;

@end
