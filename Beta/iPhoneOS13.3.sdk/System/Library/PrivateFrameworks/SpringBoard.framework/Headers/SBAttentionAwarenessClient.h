/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;

@protocol OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

@interface SBAttentionAwarenessClient : NSObject

{
    AWAttentionAwarenessConfiguration *_queue_configuration;
    _Bool _enabled;
    id <SBAttentionAwarenessClientDelegate> _delegate;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <SBAttentionAwarenessClientDelegate> delegate;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)init;
- (void)_suspend;
- (void)_resume;
- (void)setConfiguration:(id)arg1 shouldReset:(_Bool)arg2;
- (void)resetAttentionLostTimeout;
- (void)_handleAttentionAwarenessEvent:(id)arg1;
- (void)_resetAttentionLostTimeout;

@end
