/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol OS_dispatch_queue;

@interface TLAlertSystemSoundController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMapTable *_alertSystemSoundContexts;
    long long _backlightStatus;
    unsigned long long _backlightObservationRequestsCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_toneIdentifierForDeemphasizingAlert:(id)arg1;
+ (id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2;
+ (void)_reportPlaybackFailureWithPlaybackCompletionContext:(id)arg1;
+ (id)_optionsForSystemSoundAlert:(id)arg1 withSound:(id)arg2;
+ (unsigned int)_soundBehaviorForAlert:(id)arg1 withSound:(id)arg2;
+ (unsigned int)_componentSuppressionFlagsForAlert:(id)arg1;
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)arg1;
+ (id)_vibrationPatternForAlert:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)_assertRunningOnAccessQueue;
- (void)_prepareForDealloc;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_beginRequiringBacklightObservation;
- (void)_notifyOfPlaybackCompletionWithContext:(id)arg1;
- (void)_willBeginPlayingAlert:(id)arg1 withSound:(id)arg2;
- (void)_playAlert:(id)arg1 withSound:(id)arg2;
- (void)_didCompletePlaybackForAlert:(id)arg1;
- (void)_endRequiringBacklightObservation;
- (void)backlightStatusDidChange:(long long)arg1;
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
