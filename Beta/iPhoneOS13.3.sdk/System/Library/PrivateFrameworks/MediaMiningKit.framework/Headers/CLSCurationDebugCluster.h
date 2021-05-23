/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <MediaMiningKit/CLSCurationDebugObject.h>

@class NSSet, NSString;

@interface CLSCurationDebugCluster : CLSCurationDebugObject

{
    NSSet *_debugClusters;
    NSSet *_unclusteredDebugItems;
    NSString *_reason;
}

@property (retain, nonatomic) NSSet *unclusteredDebugItems;
@property (readonly) NSString *reason;

- (id)dictionaryRepresentation;
- (id)timestamp;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (id)initWithDebugItems:(id)arg1 reason:(id)arg2;
- (id)allDebugItems;
- (void)setDebugClusters:(id)arg1;
- (void)addDebugClusters:(id)arg1;

@end
