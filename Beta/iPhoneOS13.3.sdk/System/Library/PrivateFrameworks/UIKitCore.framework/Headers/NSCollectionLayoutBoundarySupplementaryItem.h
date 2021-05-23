/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/NSCollectionLayoutSupplementaryItem.h>

#import <UIKitCore/Swift-Protocol.h>

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <Swift>

{
    long long _alignment;
    _Bool _extendsBoundary;
    _Bool _pinToVisibleBounds;
    struct CGPoint _offset;
}

@property (nonatomic) _Bool extendsBoundary;
@property (nonatomic) _Bool pinToVisibleBounds;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) struct CGPoint offset;

+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(struct CGPoint)arg4;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(struct CGPoint)arg8 extendsBoundary:(_Bool)arg9 pinToVisibleBounds:(_Bool)arg10;
- (id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2;

@end
