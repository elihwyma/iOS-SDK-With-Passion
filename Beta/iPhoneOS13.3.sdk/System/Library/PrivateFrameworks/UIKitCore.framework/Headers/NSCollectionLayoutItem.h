/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSCollectionLayoutEdgeSpacing, NSCollectionLayoutSize, NSString, NSUUID;

@interface NSCollectionLayoutItem : NSObject <Swift>

{
    _Bool _containsEstimatedSizeItem;
    _Bool _hasComputedContainsEstimatedItem;
    NSCollectionLayoutEdgeSpacing *_edgeSpacing;
    NSArray *_supplementaryItems;
    NSCollectionLayoutSize *_size;
    NSUUID *_identifier;
    NSString *_name;
    NSArray *_decorationItems;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (copy, nonatomic) NSCollectionLayoutSize *size;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSArray *decorationItems;
@property (nonatomic) _Bool hasComputedContainsEstimatedItem;
@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets;
@property (copy, nonatomic) NSCollectionLayoutEdgeSpacing *edgeSpacing;
@property (nonatomic, readonly) NSCollectionLayoutSize *layoutSize;

+ (id)itemWithLayoutSize:(id)arg1;
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7;
- (void)_enumerateItemsWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumerateSupplementaryItemsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)isGroup;
- (struct NSDirectionalEdgeInsets)_effectiveContentInsets;
- (_Bool)hasCustomGroupItemProvider;
- (_Bool)isDecoration;
- (_Bool)isSupplementary;
- (_Bool)containsEstimatedSizeItem;
- (struct CGSize)_insetSizeForContainer:(id)arg1;
- (_Bool)isCustomGroup;
- (_Bool)isAuxillary;
- (id)auxillaryItems;
- (_Bool)ignoresRTL;
- (id)_visualDescription;

@end
