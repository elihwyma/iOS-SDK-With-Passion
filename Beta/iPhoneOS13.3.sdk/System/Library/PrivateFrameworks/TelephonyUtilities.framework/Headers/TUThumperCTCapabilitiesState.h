/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUCTCapabilitiesState.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <Swift>

{
    _Bool _approved;
    _Bool _associated;
    _Bool _supportsDefaultPairedDevice;
    NSSet *_approvedSecondaryDeviceIDs;
    NSString *_accountID;
    NSString *_localDeviceID;
}

@property (nonatomic, getter=isApproved) _Bool approved;
@property (copy, nonatomic) NSSet *approvedSecondaryDeviceIDs;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic, getter=isAssociated) _Bool associated;
@property (copy, nonatomic) NSString *localDeviceID;
@property (nonatomic) _Bool supportsDefaultPairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCapabilitiesState:(id)arg1;
- (id)publiclyAccessibleCopy;
- (id)initWithCapabilityInfo:(id)arg1;

@end
