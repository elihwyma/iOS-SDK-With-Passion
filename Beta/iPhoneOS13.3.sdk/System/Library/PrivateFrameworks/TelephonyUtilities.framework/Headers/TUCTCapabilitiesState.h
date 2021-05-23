/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, TUCTCapabilityInfo;

@interface TUCTCapabilitiesState : NSObject

{
    _Bool _provisioningURLInvalid;
    _Bool _supported;
    _Bool _enabled;
    _Bool _currentlyAvailable;
    _Bool _roamingSupported;
    _Bool _roamingEnabled;
    _Bool _emergencySupported;
    _Bool _emergencyCurrentlyAvailable;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

@property (copy, nonatomic, readonly) TUCTCapabilityInfo *ctCapabilityInfo;
@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (nonatomic, getter=isProvisioningURLInvalid) _Bool provisioningURLInvalid;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic, getter=isSupported) _Bool supported;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isCurrentlyAvailable) _Bool currentlyAvailable;
@property (nonatomic, getter=isRoamingSupported) _Bool roamingSupported;
@property (nonatomic, getter=isRoamingEnabled) _Bool roamingEnabled;
@property (nonatomic, getter=isEmergencySupported) _Bool emergencySupported;
@property (nonatomic, getter=isEmergencyCurrentlyAvailable) _Bool emergencyCurrentlyAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCapabilitiesState:(id)arg1;
- (id)publiclyAccessibleCopy;
- (id)archivedDataWithError:(id *)arg1;
- (id)initWithCapabilityInfo:(id)arg1;
- (void)invalidateProvisioningURL;

@end
