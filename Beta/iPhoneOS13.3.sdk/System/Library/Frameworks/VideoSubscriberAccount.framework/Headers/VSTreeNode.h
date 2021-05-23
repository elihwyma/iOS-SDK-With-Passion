/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;

@interface VSTreeNode : NSObject

{
    id _representedObject;
    VSTreeNode *_parentNode;
    NSMutableArray *_children;
}

@property (weak, nonatomic) VSTreeNode *parentNode;
@property (retain, nonatomic) NSMutableArray *children;
@property (nonatomic, readonly) id representedObject;
@property (copy, nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly, getter=isLeaf) _Bool leaf;
@property (copy, nonatomic, readonly) NSArray *childNodes;
@property (nonatomic, readonly) NSMutableArray *mutableChildNodes;

+ (id)treeNodeWithRepresentedObject:(id)arg1;
+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)keyPathsForValuesAffectingLeaf;

- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertChildNodes:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildNodesAtIndexes:(id)arg1;
- (id)descendantNodeAtIndexPath:(id)arg1;
- (id)_descendantNodesAtDepth:(unsigned long long)arg1;
- (void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
