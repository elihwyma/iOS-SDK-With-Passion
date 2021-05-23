/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEProxyServer : NSObject

{
    _Bool _authenticationRequired;
    NSString *_address;
    long long _port;
    NSString *_username;
    NSString *_password;
    long long _type;
}

@property long long type;
@property (readonly) NSString *address;
@property (readonly) long long port;
@property _Bool authenticationRequired;
@property (copy) NSString *username;
@property (copy) NSString *password;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeFromKeychain;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)needToUpdateKeychain;
- (id)copyPassword;
- (id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3;
- (void)syncWithKeychain;
- (id)copyProtectionSpace;
- (id)initWithAddress:(id)arg1 port:(long long)arg2;

@end
