/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageAreaMax;

@protocol MTLBuffer;

@interface MPSImageDilate : MPSUnaryImageKernel

{
    const struct RLERow *_rleValues;
    id <MTLBuffer> _rleBuf;
    MPSImageAreaMax *_outerMax;
    MPSImageAreaMax *_innerMax;
    unsigned int kernel;
    Class _maxClass;
    unsigned int headerSize;
    unsigned int valuesOffset;
    unsigned short centerWidth;
    unsigned short centerHeight;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
}

@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (Class)maxClass;
- (_Bool)initKernelValues:(const float *)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 values:(const float *)arg4;

@end
