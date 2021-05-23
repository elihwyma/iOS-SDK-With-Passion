/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSMPPublicDeviceIdentity, IDSMPPublicLegacyIdentity, IDSPublicAccountIdentity, NSString;

@interface IDSPublicDeviceIdentity : NSObject

{
    IDSMPPublicLegacyIdentity *_legacyIdentity;
    IDSMPPublicDeviceIdentity *_modernIdentity;
    IDSPublicAccountIdentity *_accountIdentity;
}

@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *legacyIdentity;
@property (nonatomic, readonly) IDSMPPublicDeviceIdentity *modernIdentity;
@property (nonatomic, readonly) IDSPublicAccountIdentity *accountIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;

@end
