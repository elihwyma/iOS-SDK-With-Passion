/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, UIResponder, WFWorkflow;

@interface WFComposeUserActivityManager : NSObject

{
    _Bool _active;
    WFWorkflow *_workflow;
    NSDictionary *_userInfo;
    UIResponder *_responder;
}

@property (nonatomic, readonly) WFWorkflow *workflow;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) UIResponder *responder;
@property (nonatomic, getter=isActive) _Bool active;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateUserActivityState:(id)arg1;
- (id)initWithWorkflow:(id)arg1 targetResponder:(id)arg2;

@end
