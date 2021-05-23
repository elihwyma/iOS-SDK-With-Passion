/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface CKTransactionalComponentDataSourceChangesetBuilder : NSObject

{
    NSDictionary *_updatedItems;
    NSSet *_removedItems;
    NSIndexSet *_removedSections;
    NSDictionary *_movedItems;
    NSIndexSet *_insertedSections;
    NSDictionary *_insertedItems;
}

+ (id)transactionalComponentDataSourceChangeset;

- (id)build;
- (id)withUpdatedItems:(id)arg1;
- (id)withRemovedItems:(id)arg1;
- (id)withInsertedItems:(id)arg1;
- (id)withInsertedSections:(id)arg1;
- (id)withMovedItems:(id)arg1;
- (id)withRemovedSections:(id)arg1;

@end
