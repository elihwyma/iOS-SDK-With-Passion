/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIWebDragDotView;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIWebTextRangeView : UIView

{
    UIView<UITextInput> *m_container;
    NSArray *_rects;
    NSMutableArray *_rectViews;
    UIWebDragDotView *_startDot;
    UIWebDragDotView *_endDot;
    _Bool _magnifying;
}

@property (nonatomic, readonly) UIView<UITextInput> *container;
@property (copy, nonatomic) NSArray *rects;

- (void)dealloc;
- (void)removeFromSuperview;
- (struct CGRect)boundingRect;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)startEdge;
- (struct CGRect)endEdge;
- (void)updateRectViews;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (struct CGPoint)startCorner;
- (struct CGPoint)endCorner;
- (void)geometryChanged;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (_Bool)startIsHorizontal;
- (_Bool)endIsHorizontal;
- (struct CGRect)rectAtIndex:(int)arg1;
- (void)updateDragDots;
- (id)rectViewAtIndex:(int)arg1;

@end
