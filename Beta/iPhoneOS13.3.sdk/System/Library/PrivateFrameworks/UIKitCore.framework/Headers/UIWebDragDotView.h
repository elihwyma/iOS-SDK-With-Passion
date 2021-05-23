/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView

{
    UIColor *m_selectionBarColor;
    long long m_orientation;
    struct CGRect m_stickFrame;
    struct CGRect m_dotFrame;
}

- (void)dealloc;
- (_Bool)isVertical;
- (void)drawRect:(struct CGRect)arg1;
- (void)setEdge:(struct CGRect)arg1;
- (_Bool)isPointedDown;
- (_Bool)isPointedUp;
- (_Bool)isPointedRight;
- (_Bool)isPointedLeft;
- (id)initWithEdge:(struct CGRect)arg1 container:(id)arg2 orientation:(long long)arg3;
- (struct CGRect)stickFrameForEdge:(struct CGRect)arg1 withOverlap:(double)arg2;

@end
