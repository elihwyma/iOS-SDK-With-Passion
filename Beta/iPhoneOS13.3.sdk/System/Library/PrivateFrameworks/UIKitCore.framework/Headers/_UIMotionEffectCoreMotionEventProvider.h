/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider

{
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (id)init;
- (void)dealloc;
- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (_Bool)shouldLogEvents;
- (double)fastUpdateIntervalForLogs;
- (double)slowUpdateIntervalForLogs;

@end
