/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKDayOccurrenceView, EKEvent, EKUIVisualEffectView, NSMutableArray, NSMutableDictionary, UIColor, UILabel, UIScrollView;

@protocol EKDayAllDayViewDelegate;

__attribute__((visibility("hidden")))
@interface EKDayAllDayView : UIView

{
    long long _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    _Bool _allDayLabelHighlighted;
    UIScrollView *_scroller;
    double _occurrenceInset;
    _Bool _allowSelection;
    _Bool _showSelection;
    EKEvent *_selectedEvent;
    _Bool _usesSmallText;
    _Bool _showBirthdayCount;
    long long _birthdayCount;
    long long _targetSizeClass;
    UIView *_dividerLineViewTop;
    UIView *_dividerLineViewBottom;
    EKUIVisualEffectView *_dividerLineSuperview;
    UIColor *_dividerLineVisualEffectColor;
    EKDayOccurrenceView *_birthdayCountOccurrenceView;
    NSMutableDictionary *_temporaryViewCache;
    _Bool _showsBorderLines;
    _Bool _showsLabel;
    _Bool _hideOccurrenceBackground;
    _Bool _forceSingleColumnLayout;
    int _maxVisibleRows;
    id <EKDayAllDayViewDelegate> _delegate;
    double _fixedHeight;
    EKEvent *_dimmedOccurrence;
}

@property (weak, nonatomic) id <EKDayAllDayViewDelegate> delegate;
@property (nonatomic) _Bool showsSelection;
@property (nonatomic) _Bool allowsOccurrenceSelection;
@property (nonatomic) _Bool showsBorderLines;
@property (nonatomic) _Bool showsLabel;
@property (nonatomic) _Bool hideOccurrenceBackground;
@property (nonatomic) _Bool forceSingleColumnLayout;
@property (nonatomic) _Bool showBirthdayCountInsteadOfEvents;
@property (nonatomic, readonly) double naturalHeight;
@property (nonatomic) double fixedHeight;
@property (nonatomic) int maxVisibleRows;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;

+ (id)allDayLabelBoldFont;
+ (id)unscaledAllDayFont;
+ (id)allDayLabelFont;

- (double)_height;
- (void)setOrientation:(long long)arg1;
- (void)setBorderColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (long long)_sizeClass;
- (id)occurrenceViews;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (void)dayOccurrenceViewSelected:(id)arg1 atPoint:(struct CGPoint)arg2 wasTapped:(_Bool)arg3;
- (id)selectedEvent;
- (void)selectEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (void)setOccurrences:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2;
- (void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2;
- (double)nextAvailableOccurrenceViewYOrigin;
- (void)updateLabelFont;
- (double)firstEventYOffset;
- (void)setAllDayLabelHighlighted:(_Bool)arg1;
- (_Bool)isAllDayLabelHighlighted;
- (void)addViewToScroller:(id)arg1;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (id)_findSelectedCopySubviewOfView:(id)arg1;
- (double)_allDayAreaHeightForEventCount:(long long)arg1;
- (id)_selectedCopyView;
- (double)_borderLineWidth;
- (_Bool)containsEvent:(id)arg1;
- (void)_saveTemporaryViews;
- (void)removeAllOccurrenceViews;
- (void)_clearTemporaryViews;
- (void)_setUpBirthdayCountViewIfNeeded;
- (void)setAllDayLabelColor:(id)arg1;
- (void)setTopBorderLineHidden:(_Bool)arg1;
- (void)setDividerLineVisualEffect:(id)arg1;

@end
