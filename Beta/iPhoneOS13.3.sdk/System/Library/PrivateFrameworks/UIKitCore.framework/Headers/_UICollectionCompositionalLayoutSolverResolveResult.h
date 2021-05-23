/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject

{
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
}

@property (nonatomic) struct CGPoint contentOffsetAdjustment;
@property (nonatomic) struct CGSize contentSizeAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)arg1;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)arg1;
- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)arg1;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)arg1;
- (void)addDeletedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(_Bool)arg3;
- (void)addInsertedAuxillaryOfElementKind:(id)arg1 atIndexPath:(id)arg2 isSupplementary:(_Bool)arg3;

@end
