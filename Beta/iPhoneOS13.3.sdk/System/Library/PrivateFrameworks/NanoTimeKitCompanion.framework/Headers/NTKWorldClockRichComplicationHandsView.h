/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAnalogHandsView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class CALayer, NSString, UIColor;

@protocol CLKMonochromeFilterProvider;

@interface NTKWorldClockRichComplicationHandsView : NTKAnalogHandsView <Swift>

{
    CALayer *_pegDot;
    id <CLKMonochromeFilterProvider> _filterProvider;
    UIColor *_pegDotColor;
}

@property (retain, nonatomic) UIColor *pegDotColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initForDevice:(id)arg1;
- (long long)displayedHour;
- (double)_timeAnimationFramesPerSecondForDevice:(id)arg1;

@end
