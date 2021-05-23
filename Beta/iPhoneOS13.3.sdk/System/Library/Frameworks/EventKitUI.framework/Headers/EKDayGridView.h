/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImageView, UIVisualEffect;

__attribute__((visibility("hidden")))
@interface EKDayGridView : UIView

{
    double _timeInset;
    double _hourHeight;
    double _timeWidth;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    int _selected;
    double _fixedDayWidth;
    long long _orientation;
    struct CGRect _lastBounds;
    UIColor *_backgroundColor;
    UIView *_leftBorderView;
    NSMutableArray *_middleBorderViews;
    UIView *_rightBorderView;
    NSMutableArray *_gridPatternViews;
    unsigned long long _daysToDisplay;
    EKCurrentTimeMarkerView *_timeMarker;
    UIImageView *_timeDot;
    UIView *_highlightedDayBackground;
    UIView *_fadingHighlightedDayBackground;
    UIView *_gridContainerView;
    NSMutableDictionary *_gridParentViews;
    double _cachedWidthForOffMainThreadWork;
    long long _sizeClass;
    _Bool _needsLayoutInWindow;
    _Bool _rightBorderInsetsOccurrences;
    _Bool _showsTimeLine;
    _Bool _showsTimeMarker;
    _Bool _animatesTimeMarker;
    _Bool _usesVibrantGridDrawing;
    UIColor *_lineColor;
    long long _timeMarkerDotDay;
    double _eventHorizontalInset;
    double _hoursToPadTop;
    double _hoursToPadBottom;
    long long _highlightedDayIndex;
    UIVisualEffect *_gridVisualEffect;
    UIView *_occurrenceContainerView;
    double _gridHeightScale;
}

@property (nonatomic) _Bool showsLeftBorder;
@property (nonatomic) _Bool showsRightBorder;
@property (nonatomic) _Bool rightBorderInsetsOccurrences;
@property (nonatomic) _Bool showsTimeLine;
@property (nonatomic) _Bool showsTimeMarker;
@property (nonatomic) _Bool animatesTimeMarker;
@property (nonatomic) long long timeMarkerDotDay;
@property (nonatomic) double fixedDayWidth;
@property (nonatomic) double eventHorizontalInset;
@property (nonatomic) double hoursToPadTop;
@property (nonatomic) double hoursToPadBottom;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) _Bool usesVibrantGridDrawing;
@property (nonatomic) long long highlightedDayIndex;
@property (nonatomic, readonly) EKCurrentTimeMarkerView *timeMarker;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic, readonly) double timeInset;
@property (nonatomic, readonly) double topPadding;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic, readonly) double widthForOccurrences;
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property (retain, nonatomic) UIView *occurrenceContainerView;
@property (nonatomic) double gridHeightScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cachedBackgroundImageForKey:(id)arg1;
+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;

- (void)setOrientation:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (double)bottomPadding;
- (long long)_sizeClass;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2 backgroundColor:(id)arg3 opaque:(_Bool)arg4 numberOfDaysToDisplay:(unsigned long long)arg5;
- (double)positionOfSecond:(long long)arg1;
- (double)_dayWidth;
- (int)secondAtPosition:(double)arg1;
- (void)updateHourHeight;
- (void)updateMarkerPosition;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (id)timeDotImage;
- (void)_updateTimeMarker;
- (void)_layoutHighlight;
- (id)_generateGridImage;
- (struct CGRect)rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;

@end
