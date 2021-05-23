/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class WFGiphySessionManager;

@interface WFGiphyAction : WFAction

{
    WFGiphySessionManager *_sessionManager;
}

@property (nonatomic, readonly) WFGiphySessionManager *sessionManager;

- (void)runWithUIKitWidgetUserInterface:(id)arg1 input:(id)arg2;
- (void)runWithNoUserInterface;

@end
