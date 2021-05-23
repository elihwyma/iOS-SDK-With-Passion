/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <Foundation/NSObject.h>

@interface MPSImageSpatioTemporalGuidedFilterDescriptor : NSObject

{
    _Bool _preallocateIntermediates;
    float _epsilon;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _arrayLength;
    unsigned long long _kernelSpatialDiameter;
    unsigned long long _kernelTemporalDiameter;
    unsigned long long _sourceChannels;
    unsigned long long _guideChannels;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long kernelSpatialDiameter;
@property (nonatomic) unsigned long long kernelTemporalDiameter;
@property (nonatomic) float epsilon;
@property (nonatomic) unsigned long long guideChannels;
@property (nonatomic) unsigned long long sourceChannels;
@property (nonatomic) _Bool preallocateIntermediates;

+ (id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8 preallocateIntermediates:(_Bool)arg9;
+ (id)filterDescriptorWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 arrayLength:(unsigned long long)arg3 kernelSpatialDiameter:(unsigned long long)arg4 kernelTemporalDiameter:(unsigned long long)arg5 epsilon:(float)arg6 sourceChannels:(unsigned long long)arg7 guideChannels:(unsigned long long)arg8;

- (id)init;

@end
