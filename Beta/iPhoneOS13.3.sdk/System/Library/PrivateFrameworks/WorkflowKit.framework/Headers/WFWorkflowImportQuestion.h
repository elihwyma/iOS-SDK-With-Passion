/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFAction, WFParameter;

@protocol WFParameterState;

@interface WFWorkflowImportQuestion : NSObject

{
    WFAction *_action;
    WFParameter *_parameter;
    NSString *_question;
    id <WFParameterState> _defaultState;
}

@property (weak, nonatomic, readonly) WFAction *action;
@property (weak, nonatomic, readonly) WFParameter *parameter;
@property (copy, nonatomic, readonly) NSString *question;
@property (nonatomic, readonly) id <WFParameterState> defaultState;

- (id)initWithAction:(id)arg1 parameter:(id)arg2 question:(id)arg3 defaultState:(id)arg4;
- (id)initWithSerializedRepresentation:(id)arg1 workflowActions:(id)arg2;
- (id)serializedRepresentationWithWorkflowActions:(id)arg1;

@end
