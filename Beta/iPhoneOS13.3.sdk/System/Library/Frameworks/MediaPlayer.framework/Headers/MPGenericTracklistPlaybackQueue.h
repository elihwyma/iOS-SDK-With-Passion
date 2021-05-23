/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPIdentifierSet, NSArray, NSString;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue

{
    NSString *_firstTrackIdentifier;
    NSArray *_trackIdentifiers;
    long long _shuffleType;
    long long _repeatType;
    MPIdentifierSet *_collectionIdentifierSet;
}

@property (nonatomic, readonly) NSString *firstTrackIdentifier;
@property (nonatomic, readonly) NSArray *trackIdentifiers;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) MPIdentifierSet *collectionIdentifierSet;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1 options:(id)arg2;
- (_Bool)verifyWithError:(id *)arg1;

@end
