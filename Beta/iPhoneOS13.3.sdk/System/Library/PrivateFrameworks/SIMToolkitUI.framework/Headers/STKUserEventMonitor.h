/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;

@protocol OS_dispatch_queue, STKUserEventMonitorDelegate;

@interface STKUserEventMonitor : NSObject

{
    AWAttentionAwarenessConfiguration *_queue_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _invalidated;
    _Bool _enabled;
    id <STKUserEventMonitorDelegate> _delegate;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
}

@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (weak, nonatomic) id <STKUserEventMonitorDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (void)dealloc;
- (void)_suspend;
- (void)_resume;
- (void)invalidate;
- (id)_queue;
- (void)_queue_handleAttentionAwarenessEvent:(id)arg1;
- (id)_initWithAttentionAwarenessClient:(id)arg1;

@end
