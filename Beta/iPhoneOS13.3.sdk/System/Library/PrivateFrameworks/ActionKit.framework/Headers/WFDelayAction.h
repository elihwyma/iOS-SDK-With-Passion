/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSObject;

@protocol OS_dispatch_source;

@interface WFDelayAction : WFAction

{
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
