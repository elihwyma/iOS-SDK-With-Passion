/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MTLDevice, MTLTexture;

@interface MPSImage : NSObject

{
    struct MPSDevice *_device;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _featureChannelsLayout;
    unsigned long long _featureChannelFormat;
    unsigned long long _numberOfImages;
    unsigned long long _textureType;
    NSString *_label;
    struct MPSPixelInfo _pixelInfo;
    MPSImage *_parent;
    struct MPSAutoTexture _texture;
    _Bool _updatedAlready;
}

@property (nonatomic, readonly) unsigned long long featureChannelsLayout;
@property (retain, nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) unsigned long long width;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long featureChannels;
@property (nonatomic, readonly) unsigned long long numberOfImages;
@property (nonatomic, readonly) unsigned long long textureType;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long precision;
@property (nonatomic, readonly) unsigned long long usage;
@property (nonatomic, readonly) unsigned long long featureChannelFormat;
@property (nonatomic, readonly) unsigned long long pixelSize;
@property (nonatomic, readonly) id <MTLTexture> texture;
@property (copy) NSString *label;
@property (retain, nonatomic, readonly) MPSImage *parent;

+ (id)defaultAllocator;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id).cxx_construct;
- (id)debugQuickLookObject;
- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)resourceSize;
- (struct NSArray *)batchRepresentation;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3;
- (id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 featureChannelFormat:(unsigned long long)arg4 onDevice:(id)arg5;
- (id)initWithParentImage:(id)arg1 sliceRange:(struct _NSRange)arg2 featureChannels:(unsigned long long)arg3;
- (struct NSArray *)batchRepresentationWithSubRange:(struct _NSRange)arg1;
- (unsigned long long)getPixelChannelSize;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerColumn:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(unsigned long long)arg5 region:(CDStruct_4c83c94d)arg6 featureChannelInfo:(CDStruct_328d5c87)arg7 imageIndex:(unsigned long long)arg8;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(CDStruct_4c83c94d)arg5 featureChannelInfo:(CDStruct_328d5c87)arg6 imageIndex:(unsigned long long)arg7;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2;
- (id)subImageWithFeatureChannelRange:(struct _NSRange)arg1;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_328d5c87)arg5 imageIndex:(unsigned long long)arg6;

@end
