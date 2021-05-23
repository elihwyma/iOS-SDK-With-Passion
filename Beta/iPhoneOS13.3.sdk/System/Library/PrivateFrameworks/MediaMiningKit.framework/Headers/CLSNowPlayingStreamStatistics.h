/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CLSNowPlayingStreamStatistics : NSObject

{
    NSArray *_sortedAlbums;
    NSArray *_sortedArtists;
    NSArray *_sortedTitles;
    NSArray *_sortedGenres;
    NSArray *_sortedSources;
    NSArray *_sortedSessions;
    double _maxDurationInSeconds;
    double _minDurationInSeconds;
}

@property (nonatomic, readonly) NSArray *sortedAlbums;
@property (nonatomic, readonly) NSArray *sortedArtists;
@property (nonatomic, readonly) NSArray *sortedTitles;
@property (nonatomic, readonly) NSArray *sortedGenres;
@property (nonatomic, readonly) NSArray *sortedSources;
@property (nonatomic, readonly) NSArray *sortedSessions;
@property (nonatomic, readonly) double maxDurationInSeconds;
@property (nonatomic, readonly) double minDurationInSeconds;

- (id)initWithNowPlayingStreamSessions:(id)arg1;
- (void)computeStatistics;
- (void)logStatistics;

@end
