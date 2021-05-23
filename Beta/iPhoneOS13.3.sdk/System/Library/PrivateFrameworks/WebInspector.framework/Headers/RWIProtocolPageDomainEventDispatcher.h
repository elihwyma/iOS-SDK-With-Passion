/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@interface RWIProtocolPageDomainEventDispatcher : NSObject

{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)domContentEventFiredWithTimestamp:(double)arg1;
- (void)loadEventFiredWithTimestamp:(double)arg1;
- (void)frameNavigatedWithFrame:(id)arg1;
- (void)frameDetachedWithFrameId:(id)arg1;
- (void)frameStartedLoadingWithFrameId:(id)arg1;
- (void)frameStoppedLoadingWithFrameId:(id)arg1;
- (void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)defaultAppearanceDidChangeWithAppearance:(long long)arg1;

@end
