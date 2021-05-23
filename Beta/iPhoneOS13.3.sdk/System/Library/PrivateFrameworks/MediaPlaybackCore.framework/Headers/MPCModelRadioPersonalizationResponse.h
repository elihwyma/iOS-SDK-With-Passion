/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPSectionedCollection, MPStoreLibraryPersonalizationResponse;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse

{
    MPStoreLibraryPersonalizationResponse *_personalizationResponse;
    MPSectionedCollection *_radioStationTracks;
}

@property (copy, nonatomic) MPSectionedCollection *radioStationTracks;
@property (copy, nonatomic, readonly) MPSectionedCollection *results;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

@end
