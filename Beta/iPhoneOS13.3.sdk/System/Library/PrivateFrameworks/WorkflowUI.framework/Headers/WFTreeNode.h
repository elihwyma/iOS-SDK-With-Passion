/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;

@protocol WFTreeObserver;

@interface WFTreeNode : NSObject

{
    id _representedObject;
    WFTreeNode *_parentNode;
    id <WFTreeObserver> _observer;
    NSArray *_flattenedDescendents;
    NSMutableArray *_mutableChildNodes;
}

@property (nonatomic, readonly) NSMutableArray *mutableChildNodes;
@property (retain, nonatomic) id representedObject;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly, getter=isLeaf) _Bool leaf;
@property (copy, nonatomic) NSArray *childNodes;
@property (weak, nonatomic, readonly) WFTreeNode *parentNode;
@property (weak, nonatomic) id <WFTreeObserver> observer;
@property (nonatomic, readonly) NSArray *flattenedDescendents;

- (id)init;
- (id)debugDescription;
- (void)setParentNode:(id)arg1;
- (void)addNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3;
- (void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2;
- (id)descendentNodeAtRelativeIndexPath:(id)arg1;
- (unsigned long long)enumerateWithBlock:(CDUnknownBlockType)arg1 currentLevel:(unsigned long long)arg2;
- (void)enumerateDescendentsWithBlock:(CDUnknownBlockType)arg1;
- (id)debugDescriptionAtDepth:(unsigned long long)arg1;
- (id)paddedStringAtDepth:(unsigned long long)arg1;

@end
