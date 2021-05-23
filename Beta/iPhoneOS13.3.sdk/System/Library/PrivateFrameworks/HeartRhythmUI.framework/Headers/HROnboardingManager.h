/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <Foundation/NSObject.h>

@class HKDateCache, HKHealthStore, HKHeartRhythmAvailability, HROnboardingSequence, NPSManager, NSMutableDictionary, NSString, UINavigationController;

@protocol HROnboardingManagerDelegate;

@interface HROnboardingManager : NSObject

{
    _Bool _firstTimeOnboarding;
    NSMutableDictionary *_userInfo;
    UINavigationController *_navigationController;
    HROnboardingSequence *_sequence;
    unsigned long long _currentPageNumber;
    long long _onboardingIntent;
    NPSManager *_nanoPreferenceSyncManager;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_availability;
    HKDateCache *_dateCache;
    id <HROnboardingManagerDelegate> _onboardingManagerDelegate;
    NSString *_productType;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) HROnboardingSequence *sequence;
@property (nonatomic) unsigned long long currentPageNumber;
@property (nonatomic) long long onboardingIntent;
@property (retain, nonatomic) NPSManager *nanoPreferenceSyncManager;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (nonatomic) _Bool firstTimeOnboarding;
@property (weak, nonatomic) id <HROnboardingManagerDelegate> onboardingManagerDelegate;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 firstTimeOnboarding:(_Bool)arg5;
- (id)onboardingNavigationController;
- (void)stepForward;
- (void)_wrapUpOnboardingWithAtrialFibrillationDetectionEnabled:(_Bool)arg1;
- (void)_advancingToOnboardingPageNumber:(long long)arg1;
- (void)_didStepBackward;
- (void)notNowTapped;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3;

@end
