/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView

{
    struct CGPoint _framelocation;
    double _radiusInt;
    _Bool _unknownSeen;
    UILabel *_fingerLabel;
    _UIKBRTFingerDetectionFingerCircleView *_fingerDot;
}

@property (retain, nonatomic) UILabel *fingerLabel;
@property (retain, nonatomic) _UIKBRTFingerDetectionFingerCircleView *fingerDot;
@property (nonatomic) _Bool unknownSeen;

- (double)radius;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setNeedsDisplay;
- (void)centerOn:(struct CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3;

@end
