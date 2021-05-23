/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTTimerIntentHandler.h>

@class NSString;

@interface MTCreateTimerIntentHandler : MTTimerIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveTypeForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_timer:(id)arg1 conflictsWithRunningTimersInTimers:(id)arg2;
- (void)_checkNowPlayingMediaState:(CDUnknownBlockType)arg1;
- (void)_createTimerWithIntent:(id)arg1 dryRun:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isPlayingMediaFromMRPlaybackState:(unsigned int)arg1;
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;

@end
