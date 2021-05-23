/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@class OKProducerPlugin;

@interface OKMediaProducerItem : OKMediaItem

{
    OKProducerPlugin *_plugin;
}

+ (id)scheme;
+ (id)urlForMediaObject:(id)arg1;
+ (id)urlForProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2;

- (void)dealloc;
- (id)_fileURL;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)parseDate:(id)arg1;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (id)initWithProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2;

@end
