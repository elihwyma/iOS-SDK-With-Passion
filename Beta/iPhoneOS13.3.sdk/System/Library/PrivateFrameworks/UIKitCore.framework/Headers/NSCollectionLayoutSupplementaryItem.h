/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/NSCollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutAnchor, NSString;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <Swift>

{
    long long _zIndex;
    NSString *_elementKind;
    NSCollectionLayoutAnchor *_containerAnchor;
    NSCollectionLayoutAnchor *_itemAnchor;
}

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) long long zIndex;

+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
+ (id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)item;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6;
- (id)supplementaryItem;
- (id)boundarySupplementaryItem;
- (id)decorationItem;

@end
