/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSOnboardingInfoCenter : NSObject

@property (copy, nonatomic, readonly) NSString *localizedButtonTitle;

- (void)presentDetailsFromViewController:(id)arg1;
- (id)tvProviderPrivacyButtonViewController;
- (id)tvAppPrivacyButtonViewController;

@end
