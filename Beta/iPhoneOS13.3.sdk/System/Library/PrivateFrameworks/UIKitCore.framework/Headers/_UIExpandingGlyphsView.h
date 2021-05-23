/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSAttributedString, NSString, UIAccessibilityHUDItem;

@interface _UIExpandingGlyphsView : UIView

{
    _Bool _expandsFromLeftToRight;
    _Bool _fadesOut;
    int _remainingAnimationCount;
    NSAttributedString *_attributedString;
    double _baselineOffset;
    NSArray *_imageViews;
    CDUnknownBlockType _completionBlock;
    struct CGSize _intrinsicSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsCrossfade;
@property (nonatomic, readonly) _Bool prefersBaselineAlignment;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (retain, nonatomic) NSArray *imageViews;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) int remainingAnimationCount;
@property (nonatomic) struct CGSize intrinsicSize;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic) _Bool expandsFromLeftToRight;
@property (nonatomic) _Bool fadesOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateCompletionBlock:(CDUnknownBlockType)arg1;

@end
