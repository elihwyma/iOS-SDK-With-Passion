/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <CameraEditKit/Swift-Protocol.h>

@protocol CEKAbstractSlider <Swift>

@property (nonatomic) long long sliderVerticalAlignment;
@property (nonatomic) double sliderVerticalOffset;
@property (nonatomic) double labelVerticalPadding;
@property (nonatomic) _Bool useLegibilityShadows;
@property (nonatomic) _Bool useTickMarkLegibilityShadows;
@property (nonatomic) long long textOrientation;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) CDStruct_ae5a35ae gradientInsets;
@property (nonatomic) unsigned long long fontStyle;

- (unsigned short)setTextOrientation:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)removeGradients;
- (unsigned short)setTransparentGradients;
- (unsigned short)setOpaqueGradientsWithColor: /* Error: Ran out of types for this method. */;

@end
