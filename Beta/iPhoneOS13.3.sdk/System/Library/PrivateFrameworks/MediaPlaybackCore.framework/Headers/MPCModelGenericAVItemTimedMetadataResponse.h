/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelResponse.h>

@class MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection, NSData;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse

{
    MPModelResponse *_personalizationResponse;
    NSData *_adamIDData;
    MPCModelGenericAVItemTimedMetadataStreamFields *_streamFields;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
}

@property (copy, nonatomic) NSData *adamIDData;
@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields;
@property (copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void)dealloc;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2;

@end
