/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSImageScale.h>

@protocol MTLTexture;

@interface MPSImageLanczosScale : MPSImageScale

{
    struct {
        id <MTLTexture> weights;
        double scale;
        double offset;
        unsigned int limit;
        unsigned int phaseCount;
        float phaseStride;
        float kernelTaps;
        unsigned int phaseMask;
        unsigned int kernelSize;
    } weights[2];
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;

@end
