/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@class WFContentProperty;

@interface WFContentItemAction : WFAction

{
    WFContentProperty *_defaultProperty;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly) WFContentProperty *defaultProperty;

- (id)description;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;
- (id)inputContentClasses;
- (_Bool)outputsMultipleItems;
- (_Bool)inputsMultipleItems;
- (id)unsupportedEnvironments;

@end
