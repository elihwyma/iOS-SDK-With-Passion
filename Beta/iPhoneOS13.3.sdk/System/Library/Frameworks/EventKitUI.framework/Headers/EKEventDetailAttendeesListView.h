/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIActivityIndicatorView, UIColor, UIViewController;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView

{
    long long _statusCounts[4];
    long long _columnAItems;
    long long _columnBItems;
    int _firstColumnBType;
    double _maxHeight;
    double _actualHeight;
    NSMutableArray *_inviteeNames;
    _Bool _shouldEvenOutBlocks;
    NSArray *_finalizedNames;
    UIActivityIndicatorView *_spinnerView;
    _Bool _showingSpinner;
    _Bool _highlighted;
    _Bool _groupsNames;
    NSArray *_ungrouped;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIViewController *_viewController;
    double _bottomSpacingForSpinner;
}

@property (retain, nonatomic) NSArray *ungrouped;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic) _Bool groupsNames;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) double bottomSpacingForSpinner;
@property (nonatomic, readonly) long long columnAItems;
@property (nonatomic, readonly) long long columnBItems;

- (void)dealloc;
- (double)maxHeight;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setup;
- (void)setInvitees:(id)arg1 forStatus:(int)arg2;
- (void)showSpinner;
- (void)contentSizeCategoryChanged;
- (_Bool)_haveInviteesToDraw;
- (void)_setShowingSpinner:(_Bool)arg1;
- (void)_layoutSpinner;
- (double)calculatedHeight;
- (_Bool)_shouldAlwaysDrawSingleColumn;
- (_Bool)_haveContentToDraw;
- (double)_calculateHeightForSpinnerDisplayMode;
- (double)_calculateHeightForItemCounts:(long long [4])arg1;
- (void)_createSpinnerViewIfNeeded;
- (id)generateAttributedStringsFromDisplayParticipants:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3;
- (void)finalizeInviteNames;
- (void)drawNames:(id)arg1;
- (double)maxColumnHeight;
- (void)recalculateHeight;

@end
