/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLDevice;

@interface MPSMatrix : NSObject

{
    struct MPSDevice *_device;
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned long long _offset;
    unsigned int _dataType;
    struct MPSAutoBuffer _buffer;
}

@property (retain, nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long rows;
@property (nonatomic, readonly) unsigned long long columns;
@property (nonatomic, readonly) unsigned long long matrices;
@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) unsigned long long rowBytes;
@property (nonatomic, readonly) unsigned long long matrixBytes;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) id <MTLBuffer> data;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id).cxx_construct;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (unsigned long long)resourceSize;
- (id)initPrivateWithDescriptor:(id)arg1 device:(struct MPSDevice *)arg2;
- (_Bool)canAliasWithNDArrayDescriptor:(id)arg1;
- (id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3;
- (_Bool)doesAliasWithNDArray:(id)arg1;

@end
