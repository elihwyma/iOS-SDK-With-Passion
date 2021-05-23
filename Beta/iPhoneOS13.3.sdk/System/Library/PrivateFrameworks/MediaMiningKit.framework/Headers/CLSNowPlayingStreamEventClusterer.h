/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSNowPlayingStreamEventClusteringParameters, NSArray;

@interface CLSNowPlayingStreamEventClusterer : NSObject

{
    NSArray *_sessions;
    CLSNowPlayingStreamEventClusteringParameters *_clusteringParameters;
}

@property (nonatomic, readonly) CLSNowPlayingStreamEventClusteringParameters *clusteringParameters;
@property (nonatomic, readonly) NSArray *sessions;

- (id)init;
- (id)initWithClusteringParameters:(id)arg1;
- (void)clusterEvents:(id)arg1;
- (void)naiveClusterEvents:(id)arg1;
- (void)dbScanClusterEvents:(id)arg1;
- (id)_dbScanClusterEvents:(id)arg1;
- (id)_populateSessionsWithClusters:(id)arg1;

@end
