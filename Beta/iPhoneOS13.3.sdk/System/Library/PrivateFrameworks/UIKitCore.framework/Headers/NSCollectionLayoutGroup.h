/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/NSCollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSCollectionLayoutSpacing;

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <Swift>

{
    _Bool _hasCheckedIfDecorationItemRequiresRegistration;
    _Bool __hasDecorationItemRequiringRegistration;
    NSCollectionLayoutSpacing *_interItemSpacing;
    NSArray *_subitems;
    long long _layoutDirection;
    NSArray *_visualFormats;
    CDUnknownBlockType _customGroupItemProvider;
    CDUnknownBlockType _itemsProvider;
    CDUnknownBlockType _visualFormatItemProvider;
    long long _count;
    long long _groupOptions;
}

@property (copy, nonatomic) NSArray *subitems;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) NSArray *visualFormats;
@property (copy, nonatomic) CDUnknownBlockType customGroupItemProvider;
@property (copy, nonatomic) CDUnknownBlockType itemsProvider;
@property (copy, nonatomic) CDUnknownBlockType visualFormatItemProvider;
@property (nonatomic) long long count;
@property (nonatomic) _Bool _hasDecorationItemRequiringRegistration;
@property (nonatomic) long long groupOptions;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSCollectionLayoutSpacing *interItemSpacing;

+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;
+ (id)customGroupWithLayoutSize:(id)arg1 itemProvider:(CDUnknownBlockType)arg2;
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)layoutAxis;
- (id)visualDescription;
- (_Bool)isCustomGroup;
- (id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
- (id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(struct NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(CDUnknownBlockType)arg10 visualFormatItemProvider:(CDUnknownBlockType)arg11 customGroupItemProvider:(CDUnknownBlockType)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15;
- (_Bool)isVerticalGroup;
- (_Bool)isHorizontalGroup;
- (id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;
- (_Bool)hasItemProvider;
- (_Bool)hasVisualFormat;
- (_Bool)_isListSolverCompatibleForLayoutAxis:(int)arg1;

@end
