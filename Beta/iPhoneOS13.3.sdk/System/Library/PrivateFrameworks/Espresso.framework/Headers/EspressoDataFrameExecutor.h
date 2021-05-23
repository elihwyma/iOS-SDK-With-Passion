/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSArray;

@interface EspressoDataFrameExecutor : NSObject

{
    struct vector<void *, std::__1::allocator<void *>> pointers_to_free;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *>> pixelbuffers_to_release;
    int _use_cvpixelbuffer;
    NSArray *_outputMatchingBuffers;
}

@property (retain) NSArray *outputMatchingBuffers;
@property (nonatomic) int use_cvpixelbuffer;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)useCVPixelBuffersForOutputs:(_Bool)arg1;
- (_Bool)useCVPixelBuffers;
- (int)bindInputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2 referenceNetwork:(CDStruct_2bc666a5)arg3;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(CDStruct_2bc666a5)arg2 executionStatus:(int)arg3;
- (void)freeTemporaryResources;

@end
