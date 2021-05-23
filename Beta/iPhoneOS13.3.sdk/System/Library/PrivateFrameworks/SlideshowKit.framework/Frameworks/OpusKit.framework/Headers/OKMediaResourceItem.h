/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@interface OKMediaResourceItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)arg1;

- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (id)initWithFilename:(id)arg1 andExtension:(id)arg2;

@end
