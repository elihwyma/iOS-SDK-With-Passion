/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIColor;

@interface _UIHighlightView : UIView

{
    UIColor *_color;
    double _cornerRadius;
    struct CGRect _invertedHighlightClipRect;
    NSArray *_cornerRadii;
    NSMutableArray *_innerBounds;
    NSMutableArray *_innerQuads;
    _Bool _invertHighlight;
}

- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setQuads:(id)arg1 boundaryRect:(struct CGRect)arg2;
- (void)setCornerRadii:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)cleanUp;
- (void)setFrames:(id)arg1 boundaryRect:(struct CGRect)arg2;
- (void)setInvertHighlight:(_Bool)arg1 clipRect:(struct CGRect)arg2;

@end
