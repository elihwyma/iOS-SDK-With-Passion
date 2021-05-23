/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKCurrentTimeMarkerView, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIVisualEffect;

@protocol EKDayTimeViewDelegate;

@interface EKDayTimeView : UIView

{
    NSMutableArray *_contentViews;
    NSMutableDictionary *_visualEffectViews;
    unsigned int _leftBorder:1;
    unsigned int _rightBorder:1;
    double _highlightedHour;
    long long _orientation;
    long long _targetSizeClass;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    double _timeWidth;
    _Bool _showsTimeMarker;
    _Bool _showsTimeMarkerExtension;
    _Bool _usesLightText;
    UIColor *_timeColor;
    double _hoursToPad;
    UIVisualEffect *_visualEffect;
    double _hourHeightScale;
    double _hourHeight;
    id <EKDayTimeViewDelegate> _delegate;
    struct _NSRange _hoursToRender;
}

@property (nonatomic) _Bool showsLeftBorder;
@property (nonatomic) _Bool showsRightBorder;
@property (nonatomic) _Bool showsTimeMarker;
@property (nonatomic) _Bool showsTimeMarkerExtension;
@property (nonatomic) _Bool usesLightText;
@property (nonatomic) double highlightedHour;
@property (nonatomic) double hoursToPad;
@property (retain, nonatomic) UIColor *timeColor;
@property (nonatomic, readonly) EKCurrentTimeMarkerView *timeMarker;
@property (retain, nonatomic) UIVisualEffect *visualEffect;
@property (nonatomic) struct _NSRange hoursToRender;
@property (nonatomic) double hourHeightScale;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic, readonly) double defaultHeight;
@property (weak, nonatomic) id <EKDayTimeViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultHeightForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (id)_noonLocalizedString;
+ (double)timeWidthForOrientation:(long long)arg1 inViewHierarchy:(id)arg2;
+ (double)defaultHourScale;
+ (double)defaultHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 withHourScale:(double)arg3;
+ (double)hourWidthForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (double)timeInsetForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (double)hourHeightForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (double)verticalPadding;
+ (void)_registerForInvalidation;
+ (void)_invalidateCachedValues;
+ (double)_hourFontSize;
+ (double)_dynamicFontSizeForOrientation:(long long)arg1;
+ (id)_normalFontForOrientation:(long long)arg1;
+ (id)_boldFontForOrientation:(long long)arg1;
+ (id)_hourFontForOrientation:(long long)arg1;
+ (double)_noonLocalizedWidthForOrientation:(long long)arg1;
+ (id)allDayLabelBoldFont;
+ (void)_setWidth:(double)arg1 forOrientation:(long long)arg2 sizeClass:(long long)arg3 excludeCurrentTime:(_Bool)arg4;
+ (double)_widthForOrientation:(long long)arg1 sizeClass:(long long)arg2 excludeCurrentTime:(_Bool)arg3;
+ (void)_calculateWidthForSizeClass:(long long)arg1 orientation:(long long)arg2 excludeCurrentTime:(_Bool)arg3;
+ (double)_timeTextWidthForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (id)allDayLabelFont;
+ (void)_invalidateWidth;
+ (double)_timeVerticalInsetForOrientation:(long long)arg1 inViewHierarchy:(id)arg2;
+ (void)setVerticalPadding:(double)arg1;
+ (id)unscaledAllDayLabelFont;
+ (double)heightOfHourTextForHour:(long long)arg1 orientation:(long long)arg2;

- (void)dealloc;
- (void)setOrientation:(long long)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)didMoveToWindow;
- (void)setNeedsDisplay;
- (double)topPadding;
- (long long)_sizeClass;
- (void)_localeChanged;
- (double)scaledHourHeight;
- (id)initWithFrame:(struct CGRect)arg1 sizeClass:(long long)arg2;
- (void)updateHourHeight;
- (void)updateMarkerPosition;
- (double)_positionOfSecond:(int)arg1;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (double)_timeWidth;
- (void)layoutFrames;
- (void)_fontSizeChanged;
- (void)_sizeClassChanged;
- (void)_invalidateTimeWidth;
- (void)drawRect:(struct CGRect)arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange)arg3;

@end
