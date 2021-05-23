/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface MetalInterface : NSObject

{
    id <MTLDevice> mtlDevice;
    id <MTLCommandQueue> mtlCommandQueue;
    id <MTLLibrary> mtlLibrary;
}

- (id)init;
- (id)textureFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)textureWithPixelData:(struct vImage_Buffer)arg1 format:(unsigned long long)arg2;
- (id)textureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned long long)arg3 usage:(unsigned long long)arg4;
- (void)performVotingImage:(id)arg1 outputTex:(id)arg2 subBuffer:(char *)arg3;
- (void)performAdaptiveBinarizationImage:(struct vImage_Buffer)arg1 output:(struct vImage_Buffer)arg2 sumTable:(struct vImage_Buffer)arg3 sumSqTable:(struct vImage_Buffer)arg4;

@end
