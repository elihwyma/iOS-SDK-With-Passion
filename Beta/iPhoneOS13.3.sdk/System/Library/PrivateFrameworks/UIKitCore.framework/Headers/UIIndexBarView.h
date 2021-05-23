/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIColor, UISelectionFeedbackGenerator;

@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;

@interface UIIndexBarView : UIControl <Swift>

{
    UIColor *_indexColor;
    NSArray *_entries;
    id <UIIndexBarViewDelegate> _delegate;
    UIColor *_trackingBackgroundColor;
    long long _highlightStyle;
    double _highlightedIndex;
    double _deflection;
    double _cachedDisplayHighlightedIndex;
    UIColor *_nonTrackingBackgroundColor;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
    id <UIIndexBarVisualStyle> _visualStyle;
    NSArray *_displayEntries;
}

@property (nonatomic) double cachedDisplayHighlightedIndex;
@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *axHUDGestureManager;
@property (retain, nonatomic) id <UIIndexBarVisualStyle> visualStyle;
@property (retain, nonatomic) NSArray *displayEntries;
@property (nonatomic, readonly) double displayHighlightedIndex;
@property (copy, nonatomic) NSArray *entries;
@property (weak, nonatomic) id <UIIndexBarViewDelegate> delegate;
@property (copy, nonatomic) UIColor *indexColor;
@property (copy, nonatomic) UIColor *trackingBackgroundColor;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) double highlightedIndex;
@property (nonatomic) double deflection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)canBecomeFocused;
- (_Bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)_updateBackgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (_Bool)_canDrawContent;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)resetDeflection:(_Bool)arg1;
- (_Bool)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)_updateDisplayEntries;
- (void)_userInteractionStarted;
- (void)_userInteractionStopped;
- (_Bool)_defaultCanBecomeFocused;
- (_Bool)_didSelectEntry:(id)arg1 atIndex:(long long)arg2;

@end
