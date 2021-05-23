/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject

{
    NSMutableDictionary *_actionsByGroupingIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *actionsByGroupingIdentifier;

- (id)init;
- (void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2;
- (void)removeAction:(id)arg1;
- (void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2;
- (id)actionsForGroupingIdentifier:(id)arg1;

@end
