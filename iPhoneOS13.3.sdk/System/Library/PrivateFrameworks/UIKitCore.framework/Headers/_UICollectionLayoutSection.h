//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@class NSArray, NSIndexSet, _UICollectionLayoutGroup;

@interface _UICollectionLayoutSection : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    _UICollectionLayoutGroup *_layoutGroup;
    NSDirectionalEdgeInsets _contentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    NSArray *_boundarySupplementaryItems;
    BOOL _supplementariesFollowContentInsets;
    id /* CDUnknownBlockType */ _visibleItemsTransformer;
    NSArray *_decorationItems;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
}

+ (id)layoutSectionWithLayoutGroup:(id)arg1;
@property(copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(copy, nonatomic) id /* CDUnknownBlockType */ visibleItemsTransformer; // @synthesize visibleItemsTransformer=_visibleItemsTransformer;
@property(nonatomic) BOOL supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(nonatomic) long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property(nonatomic) double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property(nonatomic) NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
// - (void).cxx_destruct;
- (id)_apiRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLayoutGroup:(id)arg1;
- (id)initWithLayoutGroup:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 interGroupSpacing:(double)arg3 orthogonalScrollingBehavior:(long long)arg4 boundarySupplementaryItems:(id)arg5 supplementariesFollowContentInsets:(BOOL)arg6 visibleItemsTransformer:(id /* CDUnknownBlockType */)arg7 decorationItems:(id)arg8 supplementaryItems:(id)arg9 pinnedSupplementaryItemIndexes:(id)arg10;

@end

