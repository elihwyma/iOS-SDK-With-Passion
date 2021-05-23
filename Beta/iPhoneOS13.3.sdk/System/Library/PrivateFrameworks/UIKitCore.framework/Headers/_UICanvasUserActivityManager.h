/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, NSUserActivity, UIActivityContinuationManager, UIScene;

__attribute__((visibility("hidden")))
@interface _UICanvasUserActivityManager : NSObject

{
    UIScene *_weakScene;
    NSUserActivity *_restorationActivity;
    NSDictionary *_connectionOptionsRestorationActivityDictionary;
    UIActivityContinuationManager *_activityContinuationManager;
    NSSet *_activityTypesForDefaultProgressUI;
    _Bool _isDisplayingActivityContinuationUI;
}

@property (nonatomic, readonly, getter=_activityContinuationManager) UIActivityContinuationManager *_activityContinuationManager;
@property (nonatomic, getter=_isDisplayingActivityContinuationUI, setter=_setIsDisplayingActivityContinuationUI:) _Bool isDisplayingActivityContinuationUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

+ (id)_userActivityManagerForScene:(id)arg1;
+ (void)_scheduleDataSaveForSceneSession:(id)arg1 saveRestorationActivity:(_Bool)arg2;
+ (id)_getUserInfoForSceneIdentifier:(id)arg1 error:(id *)arg2;
+ (_Bool)_restorationUserActivityAvailableForSceneIdentifier:(id)arg1;
+ (id)_getRestorationUserActivityForPersistentIdentifier:(id)arg1 error:(id *)arg2;
+ (void)_updatePersistedSceneSession:(id)arg1;
+ (void)_saveRestorationStateForScene:(id)arg1;
+ (void)_initializeUserActivityManager;
+ (void)_showProgressForScene:(id)arg1 whenFetchingUserActivityForTypes:(id)arg2;
+ (void)_deleteSavedSceneSessionDirectoryWithIdentifier:(id)arg1;
+ (void)_deleteSceneSessionsWithPersistentIdentifiers:(id)arg1;
+ (id)_knownSceneSessionMap;
+ (id)_fetchSceneSessionWithPersistentIdentifier:(id)arg1;
+ (id)_activityContinuationDictionaryWithAction:(id)arg1;

- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)_updateCanvasConnectionOptionsDictionary:(id)arg1;
- (void)_performCanvasRestoration;
- (void)_checkActivityContinuationAndBecomeCurrentIfNeeded;
- (void)_setupCanvasRestorationState;
- (void)_saveSceneRestorationState;
- (void)_saveOrClearRestorationDictionary:(id)arg1 forScene:(id)arg2;
- (void)activityContinuationManager:(id)arg1 displayProgressUI:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;
- (void)activityContinuationManager:(id)arg1 configureProgressUIWithError:(id)arg2;
- (void)activityContinuationManager:(id)arg1 hideProgressUIWithCompletion:(CDUnknownBlockType)arg2;
- (id)activityContinuationManagerUserCancelledError:(id)arg1;
- (_Bool)activityContinuationManagerHandleErrorsByConfiguringProgressUI:(id)arg1;
- (_Bool)activityContinuationManager:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (_Bool)activityContinuationManager:(id)arg1 continueUserActivity:(id)arg2;
- (void)activityContinuationManager:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)activityContinuationManager:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)_performCanvasRestorationIfNecessary;

@end
