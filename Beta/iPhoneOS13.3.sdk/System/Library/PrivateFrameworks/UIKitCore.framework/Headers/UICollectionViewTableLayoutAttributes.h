/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes

{
    _Bool _separatorInsetIsRelativeToCellEdges;
    _Bool _shouldIndentWhileEditing;
    _Bool _showsReorderControl;
    _Bool _layoutMarginsFollowReadableWidth;
    _Bool _insetsContentViewsToSafeArea;
    _Bool _drawsSeparatorAtTopOfSection;
    _Bool _drawsSeparatorAtBottomOfSection;
    _Bool _preferredAttributesCached;
    _Bool _isHeader;
    _Bool _floating;
    int _sectionLocation;
    long long _separatorStyle;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UIColor *_backgroundColor;
    long long _accessoryType;
    long long _editingStyle;
    double _defaultLeadingCellMarginWidth;
    double _defaultTrailingCellMarginWidth;
    double _indexBarExtentFromEdge;
    long long _indentationLevel;
    double _maxTitleWidth;
    long long _textAlignment;
    struct UIEdgeInsets _separatorInset;
    struct UIEdgeInsets _backgroundInset;
    struct UIEdgeInsets _margins;
}

@property (nonatomic) _Bool preferredAttributesCached;
@property (nonatomic) _Bool isHeader;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic) struct UIEdgeInsets margins;
@property (nonatomic) long long textAlignment;
@property (nonatomic) _Bool floating;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (nonatomic) _Bool separatorInsetIsRelativeToCellEdges;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) int sectionLocation;
@property (nonatomic) _Bool layoutMarginsFollowReadableWidth;
@property (nonatomic) _Bool insetsContentViewsToSafeArea;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) struct UIEdgeInsets backgroundInset;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) _Bool drawsSeparatorAtTopOfSection;
@property (nonatomic) _Bool drawsSeparatorAtBottomOfSection;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long editingStyle;
@property (nonatomic) _Bool shouldIndentWhileEditing;
@property (nonatomic) _Bool showsReorderControl;

+ (long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1;
+ (void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
