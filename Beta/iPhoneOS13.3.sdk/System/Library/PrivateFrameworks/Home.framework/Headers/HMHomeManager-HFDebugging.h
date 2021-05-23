/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMHomeManager.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMHomeManager (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_hasDetectediCloudIssue;

+ (id)hf_homeFutureForName:(id)arg1;

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (_Bool)hf_hasSeenOnboardingWelcomeView;
- (id)hf_mutableOrderedHomesList;
- (id)hf_orderedHomes;
- (id)hf_homeWithIdentifier:(id)arg1;
- (id)hf_orderedHomesList;
- (id)hf_setOrderedHomes:(id)arg1;
- (id)hf_homeForName:(id)arg1;
- (id)hf_setHasSeenOnboardingWelcomeView:(_Bool)arg1;
- (_Bool)hf_hasSeenNewFeaturesView;
- (id)hf_setHasSeenNewFeaturesView:(_Bool)arg1;

@end
