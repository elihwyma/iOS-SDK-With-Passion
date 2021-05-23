/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView

{
    double _currentOverlap;
    struct CGContext *_imageContext;
    double _imageContextScale;
    _UILegibilityView *_legibilityView;
    _UILegibilityImageSet *_lastGeneratedTextImage;
    double _lastGeneratedTextImageLetterSpacing;
    NSString *_lastGeneratedTextImageText;
    _Bool _visible;
    _Bool _allowsUpdates;
    _Bool _shouldTintContentImage;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic, readonly) UIStatusBarItem *item;
@property (weak, nonatomic) UIStatusBarLayoutManager *layoutManager;
@property (nonatomic, readonly) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) _Bool allowsUpdates;
@property (nonatomic, readonly) _Bool shouldTintContentImage;

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;

- (void)dealloc;
- (id)description;
- (long long)textStyle;
- (void)setContentMode:(long long)arg1;
- (id)accessibilityHUDRepresentation;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_shouldReverseLayoutDirection;
- (long long)textAlignment;
- (_Bool)allowsUserInteraction;
- (double)standardPadding;
- (long long)legibilityStyle;
- (double)shadowPadding;
- (void)beginDisablingRasterization;
- (void)endDisablingRasterization;
- (double)adjustFrameToNewSize:(double)arg1;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)updateContentsAndWidth;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)contentsImage;
- (double)neededSizeForImageSet:(id)arg1;
- (id)imageWithShadowNamed:(id)arg1;
- (void)beginImageContextWithMinimumWidth:(double)arg1;
- (id)imageFromImageContextClippedToWidth:(double)arg1;
- (void)endImageContext;
- (double)extraRightPadding;
- (double)legibilityStrength;
- (id)imageWithText:(id)arg1;
- (_Bool)animatesDataChange;
- (double)extraLeftPadding;
- (void)performPendedActions;
- (id)foregroundView;
- (void)updateForNewStyle:(id)arg1;
- (double)maximumOverlap;
- (id)textFont;
- (void)setVisible:(_Bool)arg1 settingAlpha:(_Bool)arg2;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (void)_tintContentLayerIfNeeded;
- (void)setLayerContentsImage:(id)arg1;
- (id)contentsIOSurface;
- (id)imageWithText:(id)arg1 shouldCache:(_Bool)arg2;
- (void)setCurrentOverlap:(double)arg1;
- (double)currentOverlap;
- (double)currentLeftOverlap;
- (double)currentRightOverlap;
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)arg1;
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;
- (void)clearCachedTextImage;

@end
