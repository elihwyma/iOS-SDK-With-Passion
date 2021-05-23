/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@protocol VTGestureMonitorDelegate;

@interface VTGestureMonitor : NSObject

{
    id <VTGestureMonitorDelegate> _delegate;
}

@property (weak, nonatomic) id <VTGestureMonitorDelegate> delegate;

+ (id)defaultGestureMonitor;

- (void)startObserving;

@end
