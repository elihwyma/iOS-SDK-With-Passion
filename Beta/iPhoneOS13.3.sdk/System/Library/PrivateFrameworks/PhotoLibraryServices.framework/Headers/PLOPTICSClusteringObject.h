/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLOPTICSClusteringObject : NSObject

{
    _Bool _processed;
    id _object;
    unsigned long long _index;
    unsigned long long _order;
    NSMutableArray *_neighbors;
    double _coreDistance;
    double _reachabilityDistance;
}

@property (nonatomic, readonly) id object;
@property unsigned long long index;
@property (nonatomic) unsigned long long order;
@property (nonatomic, readonly) NSMutableArray *neighbors;
@property (nonatomic) double coreDistance;
@property (nonatomic) double reachabilityDistance;
@property (nonatomic) _Bool processed;

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;

- (id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;
- (void)registerNeighbors:(id)arg1 deleteExisting:(_Bool)arg2;
- (void)sortNeighborsByDistance;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (void)updateCoreDistanceForNeighbor:(unsigned long long)arg1;

@end
