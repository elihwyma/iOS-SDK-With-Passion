/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionLayoutItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, _UICollectionLayoutSpacing;

@interface _UICollectionLayoutGroup : _UICollectionLayoutItem <Swift>

{
    int _layoutAxis;
    _Bool _isCustomGroup;
    NSArray *_subitems;
    long long _count;
    NSArray *_supplementaryItems;
    _UICollectionLayoutSpacing *_interItemSpacing;
    long long _groupOptions;
    CDUnknownBlockType _subitemsProvider;
    CDUnknownBlockType _frameProvider;
    CDUnknownBlockType _customGroupItemProvider;
    CDUnknownBlockType _visualFormatProvider;
    NSArray *_visualFormats;
}

@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) _UICollectionLayoutSpacing *interItemSpacing;
@property (nonatomic, readonly) _Bool isHorizontalGroup;
@property (nonatomic, readonly) _Bool isVerticalGroup;
@property (nonatomic, readonly) _Bool isCustomGroup;
@property (nonatomic) long long groupOptions;

+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;
+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(CDUnknownBlockType)arg3;
+ (id)groupWithLayoutAxis:(int)arg1 size:(id)arg2 subitems:(id)arg3 count:(long long)arg4;
+ (id)horizontalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)horizontalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)verticalGroupWithSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;
+ (id)verticalGroupWithSize:(id)arg1 subitems:(id)arg2;
+ (id)customGroupWithSize:(id)arg1 frameProvider:(CDUnknownBlockType)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)visualDescription;
- (id)_apiRepresentation;
- (id)initWithlayoutSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 layoutAxis:(int)arg3 isCustomGroup:(_Bool)arg4 subitems:(id)arg5 count:(long long)arg6 supplementaryItems:(id)arg7 interItemSpacing:(id)arg8 groupOptions:(long long)arg9 subitemsProvider:(CDUnknownBlockType)arg10 frameProvider:(CDUnknownBlockType)arg11 customGroupItemProvider:(CDUnknownBlockType)arg12 visualFormats:(id)arg13 visualFormatProvider:(CDUnknownBlockType)arg14;

@end
