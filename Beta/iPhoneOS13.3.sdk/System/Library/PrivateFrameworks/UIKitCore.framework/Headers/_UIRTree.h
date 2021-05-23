/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIRTree : NSObject

{
    struct shared_ptr<_UIRTreeContainerNode> _root;
    struct _NSRange _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

@property (nonatomic, readonly) struct CGRect boundingFrame;
@property (nonatomic, readonly) NSIndexSet *allIndexes;

- (id)init;
- (id)description;
- (id).cxx_construct;
- (id)visualDescription;
- (id)indexesForFramesIntersectingFrame:(struct CGRect)arg1;
- (void)insertFrame:(struct CGRect)arg1 forIndex:(long long)arg2;
- (void)enumerateFramesWithBlock:(CDUnknownBlockType)arg1;
- (struct CGRect)_frameForIndex:(long long)arg1;

@end
