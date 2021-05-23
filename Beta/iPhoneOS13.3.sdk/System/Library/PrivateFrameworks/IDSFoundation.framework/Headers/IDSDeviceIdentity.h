/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSAccountIdentity, IDSMPFullDeviceIdentity, IDSMPFullLegacyIdentity, NSString;

@protocol ENDevicePublicKey;

@interface IDSDeviceIdentity : NSObject

{
    IDSMPFullLegacyIdentity *_legacyIdentity;
    IDSMPFullDeviceIdentity *_modernIdentity;
    IDSAccountIdentity *_accountIdentity;
}

@property (nonatomic, readonly) IDSMPFullLegacyIdentity *legacyIdentity;
@property (nonatomic, readonly) IDSMPFullDeviceIdentity *modernIdentity;
@property (nonatomic, readonly) IDSAccountIdentity *accountIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <ENDevicePublicKey> devicePublicKey;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;

@end
