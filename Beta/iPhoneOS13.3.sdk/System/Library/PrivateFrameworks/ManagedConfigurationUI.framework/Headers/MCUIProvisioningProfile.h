/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCUIProvisioningProfile : NSObject

{
    _Bool _isAppleInternal;
    _Bool _isBeta;
    _Bool _isFreeDeveloperProvisioningProfile;
    _Bool _isUniversalProvisioningProfile;
    NSString *_allowedApplicationIdentifierEntitlement;
    NSString *_UUID;
}

@property (retain, nonatomic) NSString *allowedApplicationIdentifierEntitlement;
@property (retain, nonatomic) NSString *UUID;
@property (nonatomic) _Bool isAppleInternal;
@property (nonatomic) _Bool isBeta;
@property (nonatomic) _Bool isFreeDeveloperProvisioningProfile;
@property (nonatomic) _Bool isUniversalProvisioningProfile;

- (id)initWithProfile:(struct _MISProfile *)arg1;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;

@end
