/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CWFEAPCredentials : NSObject

{
    void *_TLSIdentityHandle;
    NSString *_username;
    NSString *_password;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic) const void *TLSIdentityHandle;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToEAPCredentials:(id)arg1;

@end
