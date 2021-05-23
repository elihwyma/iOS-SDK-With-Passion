/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject

{
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    struct {
        unsigned int initialized:1;
        unsigned int trackNumber:1;
        unsigned int trackCount:1;
        struct {
            unsigned int identifiers:1;
            unsigned int bookmarkTime:1;
            unsigned int shouldRememberBookmarkTime:1;
            unsigned int hasBeenPlayed:1;
            unsigned int startTime:1;
            unsigned int stopTime:1;
            unsigned int storeUbiquitousIdentifier:1;
            unsigned int userPlayCount:1;
        } playbackPosition;
    } _requestedSongProperties;
    MPPropertySet *_requestedProperties;
}

@property (copy, nonatomic, readonly) MPPropertySet *requestedProperties;

- (id)initWithRequestedProperties:(id)arg1;
- (id)genericObjectForRadioStationTrack:(id)arg1 containerUniqueID:(id)arg2 userIdentity:(id)arg3;

@end
