/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UIColor, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface UITableViewCollectionCell : UITableViewCell

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

@end
