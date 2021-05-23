/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface FBApplicationProvisioningProfile : NSObject

{
    NSString *_allowedApplicationIdentifierEntitlement;
    _Bool _appleInternalProfile;
    _Bool _beta;
    _Bool _freeDeveloperProfile;
    _Bool _provisionsAllDevices;
    _Bool _provisionsThisDevice;
    NSString *_signerIdentity;
    NSDate *_expirationDate;
    NSString *_UUID;
}

@property (copy, nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly, getter=isAppleInternalProfile) _Bool appleInternalProfile;
@property (nonatomic, readonly, getter=isBeta) _Bool beta;
@property (nonatomic, readonly, getter=isFreeDeveloperProfile) _Bool freeDeveloperProfile;
@property (nonatomic, readonly) _Bool provisionsAllDevices;
@property (nonatomic, readonly) _Bool provisionsThisDevice;
@property (copy, nonatomic, readonly) NSString *UUID;

- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithSignerIdentity:(id)arg1 profile:(id)arg2;
- (_Bool)allowsApplicationIdentifierEntitlement:(id)arg1;

@end
