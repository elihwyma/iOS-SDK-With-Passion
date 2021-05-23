/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexSet, _UICollectionLayoutGroup;

@interface _UICollectionLayoutSection : NSObject <Swift>

{
    _UICollectionLayoutGroup *_layoutGroup;
    struct NSDirectionalEdgeInsets _contentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    NSArray *_boundarySupplementaryItems;
    _Bool _supplementariesFollowContentInsets;
    CDUnknownBlockType _visibleItemsTransformer;
    NSArray *_decorationItems;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
}

@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) _Bool supplementariesFollowContentInsets;
@property (copy, nonatomic) CDUnknownBlockType visibleItemsTransformer;
@property (copy, nonatomic) NSArray *decorationItems;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;

+ (id)layoutSectionWithLayoutGroup:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLayoutGroup:(id)arg1;
- (id)_apiRepresentation;
- (id)initWithLayoutGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(_Bool)arg6 visibleItemsTransformer:(CDUnknownBlockType)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10;

@end
