/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *testRecipeIdentifier;
@property (retain, nonatomic) NSString *testRecipeDescription;
@property (nonatomic) _Bool testRecipeEatsVolumeUp;
@property (nonatomic) _Bool testRecipeEatsVolumeDown;
@property (nonatomic) _Bool testRecipeEatsRingerSwitch;
@property (nonatomic) _Bool shouldClearSettingsArchivesForMigration;
@property (nonatomic) _Bool shouldClearPrototypeCachesForMigration;
@property (nonatomic) _Bool ringerSwitchShowsUI;
@property (nonatomic) _Bool volumeUpShowsUI;
@property (nonatomic) _Bool volumeDownShowsUI;
@property (nonatomic) _Bool prototypeSettingsEnabled;
@property (nonatomic) _Bool activePrototypingEnabled;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)activeTestRecipeIdentifier;
- (_Bool)activeTestRecipeEatsEvent:(long long)arg1;
- (_Bool)_eventShowsUI:(long long)arg1;
- (id)_eventDefaults;
- (_Bool)testRecipeIsActive;
- (id)_testRecipeDefaults;
- (_Bool)canEditShowsUIForEvent:(long long)arg1;
- (_Bool)displayedShowsUIValueForEvent:(long long)arg1;
- (void)setShowsUI:(_Bool)arg1 forEvent:(long long)arg2;
- (id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)activeTestRecipeDescription;
- (id)activeTestRecipeEventDescription;
- (void)deactivateTestRecipe;
- (_Bool)prototypingServerWantsEvent:(long long)arg1;
- (id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
