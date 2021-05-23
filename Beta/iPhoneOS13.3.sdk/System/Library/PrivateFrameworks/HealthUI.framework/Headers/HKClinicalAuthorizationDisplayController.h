/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject

{
    HKClinicalSourceAuthorizationController *_authorizationController;
}

@property (nonatomic, readonly) HKClinicalSourceAuthorizationController *authorizationController;
@property (copy, nonatomic, readonly) HKSource *source;

- (id)init;
- (id)initWithAuthorizationController:(id)arg1;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(CDUnknownBlockType)arg2;
- (id)_displayStringForReadAuthorizationDate:(id)arg1;
- (id)_displayReadAuthorizationDateForMode:(long long)arg1;

@end
