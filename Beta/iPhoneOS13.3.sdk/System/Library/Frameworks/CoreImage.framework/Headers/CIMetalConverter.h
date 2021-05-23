/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@protocol MTLDevice, MTLFunction;

__attribute__((visibility("hidden")))
@interface CIMetalConverter : NSObject

{
    id <MTLDevice> _device;
    id <MTLFunction> _convertToTexture;
    id <MTLFunction> _convertToBuffer;
}

- (void)dealloc;
- (id)initWithDevice:(id)arg1 kernelName:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationTexture:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceRowBytes:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationRowBytes:(unsigned long long)arg5 destinationSize:(CDStruct_da2e99ad)arg6;

@end
