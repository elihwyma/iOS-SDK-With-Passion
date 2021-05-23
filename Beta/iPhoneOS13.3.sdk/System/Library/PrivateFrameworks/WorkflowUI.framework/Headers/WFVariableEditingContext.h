/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class WFVariable;

@interface WFVariableEditingContext : NSObject

{
    _Bool _editingVariable;
    WFVariable *_variable;
    struct _NSRange _range;
}

@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) _Bool editingVariable;

+ (id)newWithVariable:(id)arg1 range:(struct _NSRange)arg2 editingVariable:(_Bool)arg3;

@end
