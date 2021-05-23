/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor

{
    unsigned int _biometricEventType;
}

@property (nonatomic, readonly) unsigned int biometricEventType;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:(unsigned int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)describes:(id)arg1;
- (id)initWithBiometricEventType:(unsigned int)arg1;

@end
