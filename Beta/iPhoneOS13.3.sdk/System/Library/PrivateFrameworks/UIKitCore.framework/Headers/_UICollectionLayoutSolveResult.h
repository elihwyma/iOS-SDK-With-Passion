/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolveResult : NSObject

{
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSIndexSet *invalidatedIndexes;
@property (nonatomic, readonly) NSSet *invalidatedAuxillaryKinds;

- (id)init;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
- (id)invalidatedAuxillaryOffsets;
- (void)addInvalidatedItemIndexesInRange:(struct _NSRange)arg1;
- (void)addInvalidatedSupplementariesWithOffsets:(id)arg1;
- (void)addInvalidatedAuxillaryOfKind:(id)arg1 indexes:(id)arg2;
- (void)addInvalidatedItemIndexes:(id)arg1;
- (void)addInvalidatedItemIndex:(long long)arg1;
- (void)addInvalidatedAuxillaryOfKind:(id)arg1 index:(long long)arg2;

@end
