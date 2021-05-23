/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class WFVariable;

@interface WFVariableComponentPointerWrapper : NSObject

{
    WFVariable *_variable;
}

@property (nonatomic, readonly) WFVariable *variable;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithVariable:(id)arg1;

@end
