/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UICellAccessoryManager, _UICollectionViewListCellVisualProvider;

@protocol UITableConstants;

@interface _UICollectionViewListCell : UICollectionViewCell <Swift>

{
    struct {
        unsigned int needsUpdateAccessories:1;
        unsigned int usesCustomBackgroundView:1;
        unsigned int usesCustomSelectedBackgroundView:1;
        unsigned int usesCustomBackgroundColor:1;
        unsigned int isEditing:1;
    } _tableCellFlags;
    _UICollectionViewListCellVisualProvider *_visualProvider;
    NSMutableDictionary *_accessoryData;
    struct UIEdgeInsets _contentViewInset;
    long long _selectionStyle;
    id <UITableConstants> _constants;
    UICellAccessoryManager *_accessoryManager;
}

@property (nonatomic, readonly, getter=_constants) id <UITableConstants> constants;
@property (nonatomic, readonly, getter=_accessoryManager) UICellAccessoryManager *accessoryManager;
@property (nonatomic) long long selectionStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canBeEdited;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)_createVisualProviderForCell:(id)arg1;

- (id)_table;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)backgroundView;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToSuperview;
- (void)setBackgroundView:(id)arg1;
- (void)_updateConstants;
- (void)setSelectedBackgroundView:(id)arg1;
- (long long)_defaultFocusStyle;
- (void)_layoutAccessories;
- (void)_updateAccessoriesIfNeeded;
- (void)_constantsDidChange;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)_defaultBackgroundView:(_Bool)arg1;
- (id)selectedBackgroundView;
- (long long)accessoryTypeForAxis:(long long)arg1;
- (id)accessoryViewForAxis:(long long)arg1;
- (id)_accessoriesForType:(long long)arg1 view:(id)arg2 editing:(_Bool)arg3;
- (id)_accessoryViewForType:(long long)arg1;
- (id)_accessoryForRawAxis:(long long)arg1;
- (void)_setAccessory:(id)arg1 forRawAxis:(long long)arg2;
- (void)_setNeedsUpdateAccessories;
- (_Bool)_reorderControlShouldBeginReordering:(id)arg1;
- (void)_reorderControlDidBeginReordering:(id)arg1;
- (void)_reorderControl:(id)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)_reorderControlDidEndReordering:(id)arg1 cancelled:(_Bool)arg2;
- (_Bool)_canFocusProgrammatically;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (void)setAccessoryType:(long long)arg1 forAxis:(long long)arg2;
- (void)setAccessoryView:(id)arg1 forAxis:(long long)arg2;
- (struct UIEdgeInsets)_contentViewInset;
- (double)_defaultTrailingCellMarginWidth;
- (long long)_cellStyle;
- (id)_editingControlTintColorForStyle:(long long)arg1;

@end
