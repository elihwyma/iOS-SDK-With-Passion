/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSString, PGGraphLocationNode;

@interface PGGraphAreaNode : PGGraphNode

{
    struct CLLocationCoordinate2D _centroidCoordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D centroidCoordinate;
@property (readonly) _Bool isBlacklisted;
@property (readonly) NSString *fullname;
@property (readonly) PGGraphLocationNode *stateOrBiggerParentLocationNode;
@property (readonly) NSString *shortenedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CLLocationCoordinate2D)coordinate;
- (id)addressNodes;
- (_Bool)diameterIsLargerThanDiameter:(double)arg1;

@end
