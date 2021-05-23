/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface DMFProfile : NSObject

{
    _Bool _isManaged;
    _Bool _isLocked;
    _Bool _hasRemovalPasscode;
    _Bool _isEncrypted;
    NSString *_UUID;
    unsigned long long _type;
    NSString *_identifier;
    long long _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
    NSDictionary *_restrictions;
}

@property (copy, nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long profileVersion;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *organization;
@property (copy, nonatomic, readonly) NSString *profileDescription;
@property (nonatomic, readonly) _Bool isManaged;
@property (nonatomic, readonly) _Bool isLocked;
@property (nonatomic, readonly) _Bool hasRemovalPasscode;
@property (nonatomic, readonly) _Bool isEncrypted;
@property (copy, nonatomic, readonly) NSArray *signerCertificates;
@property (copy, nonatomic, readonly) NSArray *payloads;
@property (copy, nonatomic, readonly) NSDictionary *restrictions;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(_Bool)arg8 isLocked:(_Bool)arg9 hasRemovalPasscode:(_Bool)arg10 isEncrypted:(_Bool)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;

@end
