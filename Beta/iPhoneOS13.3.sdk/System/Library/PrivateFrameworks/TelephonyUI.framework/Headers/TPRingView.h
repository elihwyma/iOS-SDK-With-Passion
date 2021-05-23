/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface TPRingView : UIView

{
    CALayer *_luminanceRingLayer;
    CALayer *_dodgeRingLayer;
    CALayer *_highlightDodgeLayer;
    CALayer *_highlightLuminanceLayer;
    CALayer *_selectionLayer;
}

@property (retain) CALayer *luminanceRingLayer;
@property (retain) CALayer *dodgeRingLayer;
@property (retain) CALayer *highlightDodgeLayer;
@property (retain) CALayer *highlightLuminanceLayer;
@property (retain) CALayer *selectionLayer;

+ (struct CGSize)ringSize;
+ (double)ringStroke;
+ (id)colorForLuminance;
+ (id)createRingImageWithSize:(struct CGSize)arg1 strokeWidth:(double)arg2 color:(id)arg3;
+ (id)colorForDodge;
+ (double)ringCornerRadius;
+ (id)ringImageForLuminance;
+ (id)ringImageForDodge;

- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end
