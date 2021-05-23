/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice;

@interface MTKMeshBufferAllocator : NSObject

{
    id <MTLDevice> _device;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;
- (id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
- (id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
- (id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id)newZone:(unsigned long long)arg1;

@end
