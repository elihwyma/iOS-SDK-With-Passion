/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@interface DMFSecurityInformation : NSObject

{
    _Bool _supportsBlockLevelEncryption;
    _Bool _supportsFileLevelEncryption;
    _Bool _passcodeIsSet;
    _Bool _passcodeIsCompliantWithGlobalRestrictions;
    _Bool _passcodeIsCompliantWithProfileRestrictions;
    unsigned long long _passcodeLockGracePeriod;
    unsigned long long _passcodeLockGracePeriodEnforced;
}

@property (nonatomic, readonly) _Bool supportsBlockLevelEncryption;
@property (nonatomic, readonly) _Bool supportsFileLevelEncryption;
@property (nonatomic, readonly) _Bool passcodeIsSet;
@property (nonatomic, readonly) _Bool passcodeIsCompliantWithGlobalRestrictions;
@property (nonatomic, readonly) _Bool passcodeIsCompliantWithProfileRestrictions;
@property (nonatomic, readonly) unsigned long long passcodeLockGracePeriod;
@property (nonatomic, readonly) unsigned long long passcodeLockGracePeriodEnforced;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportsBlockLevelEncryption:(_Bool)arg1 supportsFileLevelEncryption:(_Bool)arg2 passcodeIsSet:(_Bool)arg3 passcodeIsCompliantWithGlobalRestrictions:(_Bool)arg4 passcodeIsCompliantWithProfileRestrictions:(_Bool)arg5 passcodeLockGracePeriodEnforced:(unsigned long long)arg6 passcodeLockGracePeriod:(unsigned long long)arg7;

@end
