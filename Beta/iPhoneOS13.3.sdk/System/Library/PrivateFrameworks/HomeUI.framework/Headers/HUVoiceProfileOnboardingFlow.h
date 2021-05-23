/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HMHome, NAFuture, NSString, UIViewController;

@protocol HUConfigurationViewController;

@interface HUVoiceProfileOnboardingFlow : NSObject

{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    _Bool _initialCheckedResult;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    NSString *_initialCheckedLanguage;
}

@property (nonatomic) _Bool shouldAbortThisOnboardingFlowGroup;
@property (nonatomic) _Bool shouldAbortAllOnboarding;
@property (retain, nonatomic) NSString *initialCheckedLanguage;
@property (nonatomic) _Bool initialCheckedResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NAFuture *onboardingFuture;
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController;
@property (retain, nonatomic) HMHome *home;

- (id)processUserInput:(id)arg1;
- (void)checkIfStillRequiredFromCurrentResults:(id)arg1;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

@end
