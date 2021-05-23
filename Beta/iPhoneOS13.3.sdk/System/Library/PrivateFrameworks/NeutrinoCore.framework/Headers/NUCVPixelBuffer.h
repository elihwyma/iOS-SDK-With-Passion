/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUCVPixelBuffer : NSObject

{
    struct __CVBuffer *_CVPixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer *CVPixelBuffer;

- (id)init;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;

@end
