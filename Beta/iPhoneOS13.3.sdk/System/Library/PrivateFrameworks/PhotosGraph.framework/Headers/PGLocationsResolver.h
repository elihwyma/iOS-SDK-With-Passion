/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSSet, PGIncompleteLocationResolver;

@interface PGLocationsResolver : NSObject

{
    _Bool _shouldCreateLocationToAddressMapTable;
    float _maximumMissingLocationsThreshold;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_sortedMoments;
    NSSet *_ignoredLocationNodes;
    NSSet *_ignoredAddressNodes;
    NSArray *_resolvedMomentNodes;
    NSArray *_resolvedLocationNodes;
    NSMapTable *_resolvedLocationNodesToAddressNodesMapTable;
}

@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (retain, nonatomic) NSArray *sortedMoments;
@property (retain, nonatomic) NSArray *resolvedMomentNodes;
@property (retain, nonatomic) NSArray *resolvedLocationNodes;
@property (retain, nonatomic) NSSet *ignoredLocationNodes;
@property (retain, nonatomic) NSSet *ignoredAddressNodes;
@property (nonatomic) _Bool shouldCreateLocationToAddressMapTable;
@property (nonatomic) float maximumMissingLocationsThreshold;
@property (nonatomic, readonly) NSMapTable *resolvedLocationNodesToAddressNodesMapTable;

- (void)_resolve;
- (id)initWithMoments:(id)arg1 incompleteLocationResolver:(id)arg2;
- (id)initWithSortedMoments:(id)arg1 incompleteLocationResolver:(id)arg2;
- (void)setCreateLocationToAddressMapTable:(_Bool)arg1;

@end
