/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _UICollectionLayoutAnchor, _UICollectionLayoutEdgeSpacing;

@interface _UICollectionLayoutSupplementaryItem : _UICollectionLayoutItem <Swift>

{
    NSString *_elementKind;
    long long _zIndex;
    _UICollectionLayoutAnchor *_containerAnchor;
    _UICollectionLayoutAnchor *_itemAnchor;
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    _Bool _canAdjustContentSize;
}

@property (nonatomic) long long zIndex;
@property (nonatomic, readonly) NSString *elementKind;
@property (nonatomic, readonly) _UICollectionLayoutAnchor *containerAnchor;
@property (nonatomic, readonly) _UICollectionLayoutAnchor *itemAnchor;
@property (nonatomic) _Bool canAdjustContentSize;

+ (id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;
+ (id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_apiRepresentation;
- (id)initWithSize:(id)arg1 elementKind:(id)arg2 zIndex:(long long)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 containerAnchor:(id)arg5 itemAnchor:(id)arg6 edgeSpacing:(id)arg7 name:(id)arg8 canAdjustContentSize:(_Bool)arg9;

@end
