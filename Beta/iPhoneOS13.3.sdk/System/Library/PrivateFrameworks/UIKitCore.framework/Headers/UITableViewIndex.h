/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl <Swift>

{
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    _Bool _pastTop;
    _Bool _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray *_entries;
    long long _idiom;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    struct UIEdgeInsets _drawingInsets;
}

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct UIEdgeInsets drawingInsets;
@property (retain, nonatomic) UIColor *indexColor;
@property (retain, nonatomic) UIColor *indexBackgroundColor;
@property (retain, nonatomic) UIColor *indexTrackingBackgroundColor;
@property (nonatomic, readonly) long long selectedSection;
@property (nonatomic, readonly) NSString *selectedSectionTitle;
@property (nonatomic, readonly) _Bool pastTop;
@property (nonatomic, readonly) _Bool pastBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (long long)_idiom;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_fontForIdiom:(long long)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
- (void)_cacheAndMeasureTitles;
- (void)_setIdiom:(long long)arg1;
- (struct CGRect)_effectiveBounds;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (id)_displayTitles;
- (id)_dotImage;
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;
- (long long)_indexForEntryAtPoint:(struct CGPoint)arg1;
- (_Bool)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (id)_externalDotImage;

@end
