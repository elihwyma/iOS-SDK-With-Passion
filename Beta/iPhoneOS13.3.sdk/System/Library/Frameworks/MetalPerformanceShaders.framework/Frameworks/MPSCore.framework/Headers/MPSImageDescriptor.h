/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <Foundation/NSObject.h>

#import <MPSCore/Swift-Protocol.h>

@interface MPSImageDescriptor : NSObject <Swift>

{
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _featureChannels;
    unsigned long long _numberOfImages;
    unsigned long long _channelFormat;
    unsigned long long _cacheMode;
    unsigned long long _storageMode;
    unsigned long long _usage;
    unsigned long long _featureChannelsLayout;
    unsigned long long _featureChannelFormat;
    unsigned long long _cpuCacheMode;
}

@property (nonatomic) unsigned long long featureChannelsLayout;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long featureChannels;
@property (nonatomic) unsigned long long numberOfImages;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long channelFormat;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long usage;

+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4 numberOfImages:(unsigned long long)arg5 usage:(unsigned long long)arg6;
+ (id)imageDescriptorWithChannelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 featureChannels:(unsigned long long)arg4;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)newTextureDescriptor;

@end
