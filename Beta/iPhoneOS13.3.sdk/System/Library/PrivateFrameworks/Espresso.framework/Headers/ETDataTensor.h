/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSNumber;

@interface ETDataTensor : NSObject

{
    void *_dataPointer;
    NSArray *_dataArray;
    unsigned long long _type;
    NSArray *_shape;
    NSArray *_strides;
    NSNumber *_maxNumberOfElements;
    shared_ptr_acd4b298 _blob;
    vector_fc1f6154 _allocatedImageData;
    struct float_buffer_t _float_buffer;
    struct vImage_Buffer _imageBuffer;
}

@property struct vImage_Buffer imageBuffer;
@property vector_fc1f6154 allocatedImageData;
@property struct float_buffer_t float_buffer;
@property shared_ptr_acd4b298 blob;
@property (nonatomic) void *dataPointer;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *shape;
@property (retain, nonatomic) NSArray *strides;
@property (retain, nonatomic) NSNumber *maxNumberOfElements;

- (id)description;
- (id).cxx_construct;
- (id)initWithData:(void *)arg1 type:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 imageParameters:(id)arg2 error:(id *)arg3;
- (id)initWithBlobContainer:(shared_ptr_f15d0389)arg1;

@end
