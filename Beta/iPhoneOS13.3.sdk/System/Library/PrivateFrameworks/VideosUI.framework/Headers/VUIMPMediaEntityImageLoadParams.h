/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MPArtworkCatalog, MPMediaItem, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityImageLoadParams : NSObject

{
    _Bool _calculatedIdentifier;
    NSString *_imageIdentifier;
    unsigned long long _imageType;
    MPMediaItem *_mediaItem;
    MPArtworkCatalog *_artworkCatalog;
}

@property (nonatomic) _Bool calculatedIdentifier;
@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long imageType;
@property (copy, nonatomic, readonly) NSString *imageIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMediaItem:(id)arg1 andImageType:(unsigned long long)arg2;

@end
