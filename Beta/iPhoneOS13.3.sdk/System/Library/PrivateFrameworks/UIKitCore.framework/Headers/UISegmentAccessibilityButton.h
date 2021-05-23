/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIButton.h>

@class UISegment;

__attribute__((visibility("hidden")))
@interface UISegmentAccessibilityButton : UIButton

{
    UISegment *_segment;
}

@property (retain, nonatomic) UISegment *segment;

+ (id)buttonWithSegment:(id)arg1;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
