/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/CRObject.h>

@class CRTree, CRWeakReference, NSArray;

@interface CRTreeNode : CRObject

{
    CRTree *_tree;
    NSArray *_children;
}

@property (weak, nonatomic) CRTree *tree;
@property (weak, nonatomic) CRTreeNode *parent;
@property (retain, nonatomic) CRWeakReference *parentRef;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSArray *children;

+ (id)CRProperties;

- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)parentReference;
- (_Bool)isInLoop;
- (id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3;
- (_Bool)isLoopNode;
- (id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2;

@end
