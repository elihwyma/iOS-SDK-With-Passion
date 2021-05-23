/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface ETImageFolderDataProvider : NSObject

{
    struct vector<std::__1::pair<NSString *, unsigned long>, std::__1::allocator<std::__1::pair<NSString *, unsigned long>>> samples;
    struct vector<NSString *, std::__1::allocator<NSString *>> classes;
    struct shared_ptr<Espresso::blob_cpu> imageBlob;
    struct shared_ptr<Espresso::blob_cpu> labelBlob;
    shared_ptr_ae8b808b ctx;
    int nChannels;
    NSString *imageTensorName;
    NSArray *imageShape;
    struct vimage2espresso_param param;
    NSString *labelTensorName;
    NSArray *labelShape;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomgen;
}

- (id).cxx_construct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfDataPoints;
- (struct vImage_Buffer)bufferWithPath:(id)arg1;
- (id)initWithFolder:(id)arg1 forImage:(id)arg2 ofShape:(id)arg3 andLabel:(id)arg4;
- (void)setImageTransforParams:(_Bool)arg1 biasR:(float)arg2 biasG:(float)arg3 biasB:(float)arg4 scale:(float)arg5;
- (struct vImage_Buffer)preprocess:(struct vImage_Buffer)arg1;

@end
