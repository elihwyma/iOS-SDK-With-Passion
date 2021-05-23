/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFUserItem, HMHome, NAFuture, NSString, UIViewController;

@protocol HUConfigurationViewController;

@interface HUCameraRecordingOnboardingFlow : NSObject

{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    HFUserItem *_userItem;
}

@property (nonatomic) _Bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) _Bool shouldAbortAllOnboarding;
@property (retain, nonatomic) HFUserItem *userItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;

- (id)processUserInput:(id)arg1;
- (id)_determineInitialViewController;
- (void)_setThisUserDismissedCameraOnboardingAndReminder;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

@end
