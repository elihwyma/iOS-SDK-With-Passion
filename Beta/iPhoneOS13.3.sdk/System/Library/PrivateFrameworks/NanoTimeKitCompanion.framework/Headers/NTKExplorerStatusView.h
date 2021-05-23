/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@class NSArray, NSString, NTKExplorerDotColorOptions, NTKExplorerDotLayoutConstraints, UIColor;

@protocol CLKMonochromeFilterProvider;

@interface NTKExplorerStatusView : UIView <Swift>

{
    NSArray *_dotLayers;
    _Bool _observing;
    long long _targetDotPosition;
    _Bool _showsFullSignalStrength;
    id <CLKMonochromeFilterProvider> _filterProvider;
    NTKExplorerDotLayoutConstraints *_dotLayoutConstraints;
    NTKExplorerDotColorOptions *_dotColorOptions;
    long long _position;
    long long _signalStrengthBars;
}

@property (readonly) double dotDiameter;
@property (readonly) double dotBorderWidth;
@property (readonly) double dotSpacing;
@property (readonly) double noServiceDotHeight;
@property (nonatomic, readonly) UIColor *connectedDotColor;
@property (nonatomic, readonly) UIColor *connectedDotBackgroundColor;
@property (nonatomic, readonly) UIColor *noServiceDotColor;
@property (retain, nonatomic) NTKExplorerDotLayoutConstraints *dotLayoutConstraints;
@property (retain, nonatomic) NTKExplorerDotColorOptions *dotColorOptions;
@property (nonatomic, readonly) long long position;
@property (nonatomic) long long signalStrengthBars;
@property (nonatomic) _Bool showsFullSignalStrength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

+ (id)noServiceDotColor;
+ (id)connectedDotColor;
+ (double)dotDiameter;
+ (double)dotSpacing;
+ (double)dotBorderWidth;
+ (double)noServiceDotHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initWithFrame:(struct CGRect)arg1 dotLayoutConstraints:(id)arg2 dotColorOptions:(id)arg3;
- (void)_layoutDotLayers;
- (void)_updateDotFillStates;
- (void)setDotPosition:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
