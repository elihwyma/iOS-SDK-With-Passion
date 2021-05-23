/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AFTreeNode : NSObject

{
    id _item;
    AFTreeNode *_parentNode;
    NSMutableArray *_childNodes;
}

@property (weak, nonatomic, setter=_setParentNode:) AFTreeNode *parentNode;
@property (nonatomic, readonly, getter=_childNodes) NSMutableArray *childNodes;
@property (retain, nonatomic) id item;

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;

- (id)init;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)absoluteIndexPath;
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)indexPathFromAncestorNode:(id)arg1;
- (long long)indexOfChildNode:(id)arg1;
- (long long)numberOfChildNodes;
- (id)childNodeAtIndex:(long long)arg1;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeChildNode:(id)arg1;
- (void)removeFromParentNode;
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;
- (void)removeChildNodeAtIndex:(long long)arg1;
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsNodeAtIndexPath:(id)arg1;
- (id)nodeAtIndexPath:(id)arg1;
- (id)indexPathOfNodeWithItem:(id)arg1;
- (id)lastChildNode;
- (void)addChildNode:(id)arg1;
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
