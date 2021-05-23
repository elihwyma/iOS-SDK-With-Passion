/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWInferenceConfiguration.h>

@protocol MTLCommandQueue;

@interface BWMattingInferenceConfiguration : BWInferenceConfiguration

{
    float _mainImageDownscalingFactor;
    _Bool _refinedDepthDeliveryEnabled;
    id <MTLCommandQueue> _metalCommandQueue;
}

@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) _Bool refinedDepthDeliveryEnabled;
@property (nonatomic) id <MTLCommandQueue> metalCommandQueue;

@end
