/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKPrivacyController : NSObject

+ (id)sharedInstance;
+ (void)validatePermissionsExpiryWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)_hasEntitlementForAuthorizationExemption;

- (long long)authorizationStatus;
- (void)requestAuthorization:(CDUnknownBlockType)arg1;

@end
