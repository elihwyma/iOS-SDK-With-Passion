/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNMaskingTableView.h>

@class CNContact, CNContactHeaderView, NSDictionary, UIColor, UIView;

@interface CNContactView : CNMaskingTableView

{
    _Bool _cellsLayoutCachingEnabled;
    _Bool _shouldUseMapTiles;
    _Bool _needsUpdateVisibleCells;
    UIView *_customHeaderView;
    CNContact *_contact;
    UIColor *_sectionBackgroundColor;
    UIColor *_selectedCellBackgroundColor;
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    NSDictionary *_actionTextAttributes;
    struct CGSize _oldSize;
}

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) struct CGSize oldSize;
@property (nonatomic) _Bool needsUpdateVisibleCells;
@property (retain, nonatomic) UIView *customHeaderView;
@property (nonatomic, readonly) CNContactHeaderView *defaultHeaderView;
@property (nonatomic, getter=isCellsLayoutCachingEnabled) _Bool cellsLayoutCachingEnabled;
@property (nonatomic) _Bool shouldUseMapTiles;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIColor *sectionBackgroundColor;
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (copy, nonatomic) NSDictionary *valueTextAttributes;
@property (copy, nonatomic) NSDictionary *actionTextAttributes;

+ (id)nameProperties;
+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForSplitActions;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForProperty:(id)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;
+ (Class)classForCellIdentifier:(id)arg1;
+ (id)namePropertiesForContact:(id)arg1;
+ (id)requiredNameProperties;
+ (id)allCardProperties;
+ (id)defaultCardProperties;
+ (id)optionalCardProperties;
+ (id)allImageProperties;
+ (_Bool)isMultiValueProperty:(id)arg1;
+ (_Bool)isFixedValueProperty:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)layoutMarginsDidChange;
- (void)updateFontSizes;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 contact:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;
- (void)_cnui_applyContactStyle;
- (void)registerContactCellClass:(Class)arg1;
- (void)setAttributesFromContactView:(id)arg1;
- (void)updateFontColors;
- (void)setNeedsUpdateVisibleCells;
- (void)updateVisibleCellsIfNeeded;
- (void)applyCellAppearance:(id)arg1;

@end
