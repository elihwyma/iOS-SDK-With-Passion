/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutAnchor, NSCollectionLayoutBoundarySupplementaryItem, NSCollectionLayoutDecorationItem, NSCollectionLayoutItem, NSCollectionLayoutSize, NSCollectionLayoutSupplementaryItem, NSString;

@protocol _UICollectionLayoutAuxillaryItem <Swift>

@property (nonatomic, readonly) NSCollectionLayoutSize *size;
@property (nonatomic, readonly) NSString *elementKind;
@property (nonatomic, readonly) NSCollectionLayoutAnchor *containerAnchor;
@property (nonatomic, readonly) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets contentInsets;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets _effectiveContentInsets;
@property (nonatomic, readonly) long long zIndex;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, readonly) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic, readonly) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (nonatomic, readonly) NSCollectionLayoutDecorationItem *decorationItem;

@end
