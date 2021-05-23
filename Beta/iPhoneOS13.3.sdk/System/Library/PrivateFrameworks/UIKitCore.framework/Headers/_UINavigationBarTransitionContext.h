/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject

{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UIBarBackground *_backgroundView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarLayout *_fromLayout;
    _UINavigationBarLayout *_toLayout;
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    double _backgroundAlpha;
    int _largeTitleTransitionType;
    long long _apiVersion;
    struct {
        unsigned int isRTL:1;
        unsigned int compact:1;
        unsigned int allowLargeTitles:1;
        unsigned int twoPart:1;
        unsigned int beginWithLargeTitle:1;
        unsigned int endWithLargeTitle:1;
        unsigned int observedScrollViewOffsetIsApplicable:1;
        unsigned int sharesContentViewLayouts:1;
    } _navigationBarTransitionContextFlags;
    NSMutableSet *_clippingViews;
    struct CGPoint _startingContentOffsetForObservedScrollView;
}

@property (nonatomic, readonly) int transition;
@property (nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) _UINavigationBarItemStack *stack;
@property (nonatomic, setter=setRTL:) _Bool isRTL;
@property (nonatomic) _Bool compact;
@property (nonatomic) _Bool allowLargeTitles;
@property (nonatomic) _Bool twoPart;
@property (nonatomic) long long apiVersion;
@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView;
@property (retain, nonatomic) _UINavigationBarContentView *contentView;
@property (retain, nonatomic) _UIBarBackground *backgroundView;
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView;
@property (nonatomic, readonly) UIView *viewFadingInFromCustomAlpha;
@property (nonatomic, readonly) UIView *viewUsingEaseOutCurve;
@property (nonatomic, readonly) UIView *viewUsingEaseInCurve;
@property (nonatomic, readonly) double contentViewFittingHeight;
@property (nonatomic, readonly) double contentViewMaxY;
@property (nonatomic) _Bool beginWithLargeTitle;
@property (nonatomic) _Bool endWithLargeTitle;
@property (nonatomic) struct CGPoint startingContentOffsetForObservedScrollView;
@property (nonatomic) _Bool observedScrollViewOffsetIsApplicable;
@property (nonatomic) _Bool sharesContentViewLayouts;
@property (retain, nonatomic) _UINavigationBarLayout *fromLayout;
@property (retain, nonatomic) _UINavigationBarLayout *toLayout;

+ (id)contextForTransition:(int)arg1;

- (id)description;
- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (void)_animateAsTwoPartsWithoutOverlap:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_animateBackgroundView;
- (void)_resetContentAndLargeTitleViewCompleted:(_Bool)arg1;
- (void)setAllLargeTitleLayoutsVisible;
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(CDUnknownBlockType)arg2 partTwo:(CDUnknownBlockType)arg3;
- (void)recordUpdates:(CDUnknownBlockType)arg1;
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_addClippingView:(id)arg1;
- (void)_removeAllClippingViews;
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;

@end
