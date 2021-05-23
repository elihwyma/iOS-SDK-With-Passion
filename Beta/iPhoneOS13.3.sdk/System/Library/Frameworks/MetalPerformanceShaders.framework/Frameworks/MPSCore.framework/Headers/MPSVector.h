/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSVector : NSObject

{
    struct MPSDevice *_device;
    unsigned long long _length;
    unsigned long long _vectors;
    unsigned long long _vectorBytes;
    unsigned long long _offset;
    unsigned int _dataType;
    struct MPSAutoBuffer _buffer;
}

@property (retain, nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long vectors;
@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) unsigned long long vectorBytes;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) id <MTLBuffer> data;

- (id)init;
- (id).cxx_construct;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (unsigned long long)resourceSize;
- (id)initPrivateWithDescriptor:(id)arg1 device:(struct MPSDevice *)arg2;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithBuffer:(id)arg1 length:(unsigned long long)arg2 dataType:(unsigned int)arg3;

@end
