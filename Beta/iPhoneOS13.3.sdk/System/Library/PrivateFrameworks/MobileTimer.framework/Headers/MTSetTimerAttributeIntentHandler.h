/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTUpdateTimerIntentHandler.h>

@class NSString;

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleSetTimerAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmSetTimerAttribute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveTargetTimerForSetTimerAttribute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveToDurationForSetTimerAttribute:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_responseToSetTimerAttributeIntent:(id)arg1 withUpdatedTimer:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)_updateTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3 dryRun:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;

@end
