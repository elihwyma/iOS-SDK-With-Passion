/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolveParameters : NSObject

{
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    _Bool _isFullResolve;
}

@property (nonatomic, readonly) _Bool isFullResolve;
@property (nonatomic, readonly) _Bool hasInvalidatedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSIndexSet *invalidatedIndexes;
@property (nonatomic, readonly) NSSet *invalidatedAuxillaryKinds;

+ (id)parametersForFullResolve;

- (id)init;
- (void)addItemIndex:(long long)arg1;
- (void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
- (id)invalidatedAuxillaryOffsets;
- (id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(_Bool)arg2;
- (id)initWithInvalidatedIndexes:(id)arg1;

@end
