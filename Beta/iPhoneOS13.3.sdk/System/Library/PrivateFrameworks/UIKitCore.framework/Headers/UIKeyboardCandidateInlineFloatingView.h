/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView

{
    _Bool _reducedWidth;
    _Bool _inlineRectIsVertical;
    int _position;
    NSString *_inlineText;
    double _maxX;
    double _extendedStateAdditionalHeight;
    struct CGSize _preferredSize;
    struct CGRect _inlineRect;
    struct CGRect _previousCollapsedFrame;
}

@property (copy, nonatomic) NSString *inlineText;
@property (nonatomic) struct CGRect inlineRect;
@property (nonatomic) _Bool inlineRectIsVertical;
@property (nonatomic) double maxX;
@property (nonatomic) double extendedStateAdditionalHeight;
@property (nonatomic) struct CGSize preferredSize;
@property (nonatomic, readonly, getter=isReducedWidth) _Bool reducedWidth;
@property (nonatomic) int position;
@property (nonatomic) struct CGRect previousCollapsedFrame;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldExtendUpwards;
- (void)setInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3 layout:(_Bool)arg4;
- (struct CGRect)convertFromInputDelegateRect:(struct CGRect)arg1;
- (_Bool)isAcceptableFrame:(struct CGRect)arg1 afterScrollBy:(double)arg2;
- (struct CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect)arg2;
- (struct CGRect)adjustedFrameFromDesiredFrame:(struct CGRect)arg1 textHeight:(double)arg2;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect)arg2 maxX:(double)arg3;

@end
