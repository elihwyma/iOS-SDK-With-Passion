/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class MPSectionedCollection;

@interface MPCModelRadioPersonalizationRequest : MPModelRequest <Swift>

{
    MPSectionedCollection *_radioStationTracks;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)requiresNetwork;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRadioStationTracks:(id)arg1;

@end
