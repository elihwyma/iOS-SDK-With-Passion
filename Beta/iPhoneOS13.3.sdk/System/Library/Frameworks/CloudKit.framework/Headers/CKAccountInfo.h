/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKAccountInfo : NSObject

{
    _Bool _hasValidCredentials;
    long long _accountStatus;
    long long _accountPartition;
    long long _deviceToDeviceEncryptionAvailability;
}

@property (nonatomic) _Bool supportsDeviceToDeviceEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) _Bool hasValidCredentials;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end
