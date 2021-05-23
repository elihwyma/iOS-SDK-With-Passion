/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIMotionEffectEventConsumer;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEventProvider : NSObject

{
    id <_UIMotionEffectEventConsumer> _consumer;
}

@property id <_UIMotionEffectEventConsumer> consumer;

- (id)currentEvent;
- (void)setSlowUpdatesEnabled:(_Bool)arg1;
- (void)startGeneratingEvents;
- (void)stopGeneratingEvents;
- (_Bool)shouldLogEvents;
- (double)fastUpdateIntervalForLogs;
- (double)slowUpdateIntervalForLogs;
- (_Bool)wantsSynchronizedUpdates;

@end
