/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/Swift-Protocol.h>

@class MISSING_TYPE, NSMutableDictionary;

@protocol HROnboardingPageViewControllerDelegate <Swift>

@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (nonatomic, readonly) _Bool firstTimeOnboarding;

- (MISSING_TYPE *)dateCache;
- (MISSING_TYPE *)healthStore;
- (MISSING_TYPE *)stepForward;
- (MISSING_TYPE *)onboardingManagerDelegate;

@end
