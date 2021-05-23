/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIMediaCollection.h>

@class MPMediaItemCollection, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaCollection : VUIMediaCollection

{
    NSString *_coverArtImageIdentifier;
    MPMediaItemCollection *_mediaItemCollection;
}

@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;

- (id)isLocal;
- (id)resolution;
- (id)contentRating;
- (id)assetController;
- (id)HLSResolution;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)HLSAudioCapability;
- (id)audioCapability;
- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5;
- (id)showIdentifier;
- (id)playedState;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)coverArtImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;

@end
