/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

@class UIColor;

@interface NTKExplorerHandsView : NTKAnalogHandsView

{
    UIColor *_secondHandDotColor;
    struct CGPoint _secondHandCenter;
}

@property (retain, nonatomic) UIColor *secondHandDotColor;
@property (nonatomic) struct CGPoint secondHandCenter;

- (void)layoutSubviews;
- (void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3;
- (id)initForDevice:(id)arg1;
- (void)setInlayColor:(id)arg1;

@end
