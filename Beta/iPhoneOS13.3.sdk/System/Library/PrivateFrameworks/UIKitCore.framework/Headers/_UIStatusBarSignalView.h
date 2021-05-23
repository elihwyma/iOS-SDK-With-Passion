/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarPersistentAnimationView.h>

@class NSString, UIAccessibilityHUDItem, UIColor;

@interface _UIStatusBarSignalView : _UIStatusBarPersistentAnimationView

{
    _Bool _smallSize;
    long long _numberOfBars;
    long long _numberOfActiveBars;
    long long _signalMode;
    UIColor *_inactiveColor;
    UIColor *_activeColor;
    long long _iconSize;
}

@property (nonatomic) long long iconSize;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) long long numberOfActiveBars;
@property (nonatomic) long long signalMode;
@property (copy, nonatomic) UIColor *inactiveColor;
@property (copy, nonatomic) UIColor *activeColor;
@property (nonatomic) _Bool smallSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;

+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;

- (void)applyStyleAttributes:(id)arg1;
- (void)_updateBars;
- (void)_updateActiveBars;
- (void)_colorsDidChange;
- (void)_iconSizeDidChange;
- (void)_updateFromMode:(long long)arg1;

@end
