/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, SearchUIDragSource, SearchUIRowModel, UIView, UIViewController;

@protocol SearchUIFeedbackDelegateInternal, SearchUIResultShortLook;

@interface SearchUITableViewCell : UITableViewCell

{
    _Bool _isExpanded;
    SearchUIRowModel *_rowModel;
    UIView *_platterView;
    id <SearchUIFeedbackDelegateInternal> _delegate;
    UIView *_sizingContainer;
    SearchUIDragSource *_dragSource;
    UIViewController<SearchUIResultShortLook> *_shortLookViewController;
}

@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (retain, nonatomic) UIView *platterView;
@property (nonatomic) _Bool isExpanded;
@property (readonly) _Bool shouldDrawBackgroundColor;
@property (weak, nonatomic) id <SearchUIFeedbackDelegateInternal> delegate;
@property (retain, nonatomic) UIView *sizingContainer;
@property (retain, nonatomic) SearchUIDragSource *dragSource;
@property (weak, nonatomic) UIViewController<SearchUIResultShortLook> *shortLookViewController;
@property (readonly) NSArray *visibleResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2;
+ (id)reuseIdentifierForResult:(id)arg1;
+ (_Bool)canCellExpandWithResults:(id)arg1 forView:(id)arg2;
+ (double)distanceToTopOfAppIconsForMultiResultCell;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(_Bool)arg2;
- (void)_setAnimating:(_Bool)arg1 clippingAdjacentCells:(_Bool)arg2;
- (void)_setSeparatorDrawsInVibrantLightMode:(_Bool)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (void)updateWithResult:(id)arg1;
- (_Bool)isExpandable;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)canSetupKeyboardHandler;
- (void)setupKeyboardHandler;
- (_Bool)navigateKeyboardRight;
- (void)returnKeyPressed;
- (_Bool)navigateKeyboardLeft;
- (_Bool)navigateKeyboardUp;
- (_Bool)navigateKeyboardDown;
- (void)removeKeyboardHandler;
- (void)updateWithResults:(id)arg1;
- (void)updateExpanded:(_Bool)arg1;
- (_Bool)supportsRecycling;

@end
