/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSString, SBAttentionAwarenessClient, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager, _DECConsumer, _DECResult;

@interface SBAppSuggestionManager : NSObject

{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    _DECConsumer *_expertCenterSuggestionMonitor;
    _DECResult *_currentExpertBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    NSCountedSet *_listeningReasons;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;
- (id)currentSuggestedApp;
- (void)_createSuggestionSources;
- (void)_listenForNotifications;
- (void)_destroySuggestionSources;
- (unsigned long long)_supportedExpertCenterCategories;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_handleAppUninstall:(id)arg1;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)expertCenterSuggestionChanged:(id)arg1;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)performWithCurrentSuggestedAppAndApplication:(CDUnknownBlockType)arg1;
- (void)enableListeningForUpdatesForReason:(id)arg1;
- (void)disableListeningForUpdatesForReason:(id)arg1;

@end
