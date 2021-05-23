/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface MTKTextureIOBufferAllocator : NSObject

{
    id <MTLDevice> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDevice:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end
