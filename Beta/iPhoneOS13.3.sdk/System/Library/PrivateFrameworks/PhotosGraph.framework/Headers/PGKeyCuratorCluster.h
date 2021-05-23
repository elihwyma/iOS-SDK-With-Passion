/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol CLSInvestigationItem;

@interface PGKeyCuratorCluster : NSObject

{
    NSArray *_subclusters;
    id <CLSInvestigationItem> _keyItem;
    double _score;
}

@property (readonly) NSArray *subclusters;
@property (readonly) id <CLSInvestigationItem> keyItem;
@property (readonly) double score;

- (id)initWithSubclusters:(id)arg1 keyItem:(id)arg2 score:(double)arg3;

@end
