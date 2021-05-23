/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/NSCollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutAnchor, NSCollectionLayoutBoundarySupplementaryItem, NSCollectionLayoutSize, NSCollectionLayoutSupplementaryItem, NSString;

@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem <Swift>

{
    _Bool _isBackgroundDecoration;
    long long _zIndex;
    NSString *_elementKind;
    NSCollectionLayoutAnchor *_containerAnchor;
    NSCollectionLayoutAnchor *_itemAnchor;
    Class __registrationViewClass;
}

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic, readonly) _Bool isBackgroundDecoration;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;
@property (nonatomic) long long zIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSCollectionLayoutSize *size;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets contentInsets;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets _effectiveContentInsets;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, readonly) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (nonatomic, readonly) NSCollectionLayoutBoundarySupplementaryItem *boundarySupplementaryItem;
@property (nonatomic, readonly) NSCollectionLayoutDecorationItem *decorationItem;

+ (id)backgroundDecorationItemWithElementKind:(id)arg1;
+ (id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElementKind:(id)arg1 size:(id)arg2 contentInsets:(struct NSDirectionalEdgeInsets)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 registrationViewClass:(Class)arg7 isBackgroundDecoration:(_Bool)arg8;

@end
