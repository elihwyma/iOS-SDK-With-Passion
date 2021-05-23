/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@class MPSImageHistogram;

@interface MPSImageFindKeypoints : MPSKernel

{
    CDStruct_5a9dc70e _keypointRangeInfo;
    MPSImageHistogram *histogramKernel;
}

@property (nonatomic, readonly) CDStruct_5a9dc70e keypointRangeInfo;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 info:(const CDStruct_5a9dc70e *)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 regions:(const CDStruct_1e3be3a8 *)arg3 numberOfRegions:(unsigned long long)arg4 keypointCountBuffer:(id)arg5 keypointCountBufferOffset:(unsigned long long)arg6 keypointDataBuffer:(id)arg7 keypointDataBufferOffset:(unsigned long long)arg8;

@end
