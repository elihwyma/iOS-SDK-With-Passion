/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject

{
    id <MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
    _Bool _prefersEnqueuingUsingAirPlay;
    NSString *_localizedTitle;
    long long _tracklistSource;
    id <NSSecureCoding> _tracklistToken;
    long long _actionAfterQueueLoad;
    long long _shuffleMode;
    long long _repeatMode;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
}

@property (nonatomic, readonly) id <MPCPlaybackIntentDataSource> tracklistDataSource;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic) long long tracklistSource;
@property (retain, nonatomic) id <NSSecureCoding> tracklistToken;
@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) long long repeatMode;
@property (nonatomic) _Bool prefersEnqueuingUsingAirPlay;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;

+ (id)intentFromQueueDescriptor:(id)arg1;
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;
+ (id)radioPlaybackIntentFromSong:(id)arg1;
+ (id)tracklistDataSourceForSource:(long long)arg1;
+ (id)radioPlaybackIntentFromReference:(id)arg1;
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;
+ (id)radioPlaybackIntentFromArtist:(id)arg1;
+ (id)radioPlaybackIntentWithStation:(id)arg1;
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;

- (id)init;
- (id)description;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getRepresentativeMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getArchiveWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
