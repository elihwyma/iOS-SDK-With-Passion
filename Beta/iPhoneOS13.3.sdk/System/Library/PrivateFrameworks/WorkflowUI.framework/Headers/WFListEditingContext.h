/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFListEditingContext : NSObject

{
    _Bool _key;
    _Bool _nested;
    WFVariableEditingContext *_variableContext;
    WFListEditorUpdateItem *_updateItem;
}

@property (retain, nonatomic) WFVariableEditingContext *variableContext;
@property (retain, nonatomic) WFListEditorUpdateItem *updateItem;
@property (nonatomic) _Bool key;
@property (nonatomic) _Bool nested;

@end
