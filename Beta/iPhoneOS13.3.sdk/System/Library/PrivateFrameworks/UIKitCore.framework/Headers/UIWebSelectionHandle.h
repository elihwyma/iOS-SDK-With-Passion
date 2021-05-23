/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITouch, UIWebSelectionView;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView

{
    UITouch *_touch;
    int _position;
    int _textPosition;
    UIWebSelectionView *_selectionView;
    struct CGSize _touchToCenterOffset;
    struct CGSize _centerToSelectionPointOffset;
}

@property (retain, nonatomic) UITouch *touch;
@property (nonatomic) int position;
@property (nonatomic) int textPosition;
@property (nonatomic, readonly) _Bool hasTextPosition;
@property (nonatomic, readonly) struct CGSize touchToCenterOffset;
@property (nonatomic) struct CGSize centerToSelectionPointOffset;

- (void)dealloc;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGPoint)applyCenterToSelectionPointOffset:(struct CGPoint)arg1;
- (struct CGPoint)applyTouchToCenterOffset:(struct CGPoint)arg1;
- (void)snapToCornerOfRange:(id)arg1 atStart:(_Bool)arg2;
- (id)initWithPosition:(int)arg1 selectionView:(id)arg2;
- (void)dropActiveTouch;
- (struct CGPoint)applyOffsetInDirectionOfHandle:(double)arg1 toPoint:(struct CGPoint)arg2;

@end
