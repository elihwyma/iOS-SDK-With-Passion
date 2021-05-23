/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface TUCTCapabilityInfo : NSObject <Swift>

{
    _Bool _canEnable;
    _Bool _enabled;
    _Bool _canEnableRoaming;
    _Bool _roamingEnabled;
    int _provisioningStatus;
    NSURL *_provisioningURL;
    NSData *_provisioningPostData;
}

@property (nonatomic) int provisioningStatus;
@property (copy, nonatomic) NSURL *provisioningURL;
@property (copy, nonatomic) NSData *provisioningPostData;
@property (nonatomic) _Bool canEnable;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool canEnableRoaming;
@property (nonatomic, getter=isRoamingEnabled) _Bool roamingEnabled;
@property (nonatomic, readonly, getter=isProvisioningURLInvalid) _Bool provisioningURLInvalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (void)invalidateProvisioningURL;

@end
