/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSString;

@protocol MTLDevice;

@interface MPSNDArray : NSObject

{
    MISSING_TYPE *_dimensionLengths;
    MISSING_TYPE *_sliceOffsets;
    MISSING_TYPE *_sliceLengths;
    MISSING_TYPE *_dimensionOrder;
    unsigned long long _numberOfDimensions;
    unsigned int _dataType;
    NSString *_label;
    struct MPSDevice *_device;
    MPSNDArray *_parent;
    struct MPSAutoBuffer _buffer;
    unsigned long long _offset;
    unsigned long long _rowBytes;
    struct MPSLibrary *_library;
}

@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) unsigned long long dataTypeSize;
@property (nonatomic, readonly) unsigned long long numberOfDimensions;
@property (retain, nonatomic, readonly) id <MTLDevice> device;
@property (retain, nonatomic, readonly) MPSNDArray *parent;

+ (id)defaultAllocator;
+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)buffer;
- (unsigned long long)offset;
- (id)descriptor;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (void)readBytes:(void *)arg1 strideBytes:(long long *)arg2;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (void)writeBytes:(void *)arg1 strideBytes:(long long *)arg2;
- (id)matrixWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (unsigned long long)resourceSize;
- (unsigned long long)lengthOfDimension:(unsigned long long)arg1;
- (void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 offset:(unsigned long long)arg4 rowStrides:(long long *)arg5;
- (void)makeStrideBytesInArray:(long long *)arg1;
- (void)encodeCopyWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationStrideBytes:(long long *)arg5;
- (void)encodeReshapedMatrixWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7;
- (void)exportDataWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 offset:(unsigned long long)arg4 rowStrides:(long long *)arg5 lengths:(unsigned long long *)arg6 numLengths:(unsigned long long)arg7 flatteningLevel:(unsigned long long)arg8;
- (MISSING_TYPE *)makeStrideBytes;
- (void)copyDataWithCommandBuffer:(id)arg1 images:(struct NSArray *)arg2 offset:(struct MPSImageCoordinate)arg3 imageToArray:(_Bool)arg4;
- (id)dataWithCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 matrix:(id)arg2;
- (id)initWithDevice:(id)arg1 scalar:(double)arg2;
- (id)arrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (void)encodeReshapedBatchWithCommandBuffer:(id)arg1 toBuffer:(id)arg2 destinationDataType:(unsigned int)arg3 destinationOffsetBytes:(unsigned long long)arg4 destinationRowBytes:(unsigned long long)arg5 destinationColumns:(unsigned long long)arg6 destinationRows:(unsigned long long)arg7;
- (void)importDataWithCommandBuffer:(id)arg1 fromBuffer:(id)arg2 sourceDataType:(unsigned int)arg3 offset:(unsigned long long)arg4 rowStrides:(long long *)arg5;
- (void)exportDataWithCommandBuffer:(id)arg1 toImages:(struct NSArray *)arg2 offset:(struct MPSImageCoordinate)arg3;
- (void)importDataWithCommandBuffer:(id)arg1 fromImages:(struct NSArray *)arg2 offset:(struct MPSImageCoordinate)arg3;
- (void)printNDArray;

@end
