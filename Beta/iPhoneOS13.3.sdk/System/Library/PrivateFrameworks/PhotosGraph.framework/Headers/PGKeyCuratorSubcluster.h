/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@protocol CLSInvestigationItem;

@interface PGKeyCuratorSubcluster : NSObject

{
    id <CLSInvestigationItem> _keyItem;
    double _score;
}

@property (readonly) id <CLSInvestigationItem> keyItem;
@property (readonly) double score;

- (id)initWithItems:(id)arg1 keyItem:(id)arg2 score:(double)arg3;

@end
