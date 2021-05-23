/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaItem.h>

@class MPMediaItem, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItem : VUIMediaItem

{
    NSString *_coverArtImageIdentifier;
    NSString *_previewFrameImageIdentifier;
    MPMediaItem *_mediaItem;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;

- (id)isLocal;
- (id)assetType;
- (id)resolution;
- (id)isPlayable;
- (id)contentRating;
- (id)credits;
- (id)extrasURL;
- (id)studio;
- (id)rentalExpirationDate;
- (id)assetController;
- (id)mediaPlayerMediaItem;
- (id)HLSResolution;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)HLSAudioCapability;
- (id)audioCapability;
- (id)showIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3;
- (id)previewFrameImageIdentifier;
- (id)seasonIdentifier;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;

@end
