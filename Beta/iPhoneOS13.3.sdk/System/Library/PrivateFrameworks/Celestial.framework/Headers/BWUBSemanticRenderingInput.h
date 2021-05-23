/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray;

@interface BWUBSemanticRenderingInput : NSObject

{
    struct __CVBuffer *_skinMask;
    struct __CVBuffer *_lowResPersonMask;
    NSArray *_faceObservations;
}

@property (nonatomic, readonly) struct __CVBuffer *skinMask;
@property (nonatomic, readonly) struct __CVBuffer *lowResPersonMask;
@property (nonatomic, readonly) NSArray *faceObservations;

- (void)dealloc;
- (id)initWithSkinMask:(struct __CVBuffer *)arg1 lowResPersonMask:(struct __CVBuffer *)arg2 faceObservations:(id)arg3;

@end
