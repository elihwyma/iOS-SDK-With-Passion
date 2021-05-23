/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSError, WFGradient, WFParameter;

@protocol WFParameterState;

@interface WFParameterEditorModel : NSObject

{
    WFParameter *_parameter;
    id <WFParameterState> _state;
    NSError *_resourceError;
    WFGradient *_buttonGradient;
}

@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) id <WFParameterState> state;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) WFGradient *buttonGradient;

- (id)initWithParameter:(id)arg1 state:(id)arg2;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;

@end
