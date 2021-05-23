/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, PGIncompleteLocationResolver;

@interface PGLocationsFilterer : NSObject

{
    NSArray *_sortedMomentNodes;
    NSArray *_locationNodes;
    PGIncompleteLocationResolver *_incompleteLocationResolver;
    NSArray *_filteredLocationNodes;
    unsigned long long _filteringType;
}

@property (readonly) NSArray *sortedMomentNodes;
@property (readonly) NSArray *locationNodes;
@property (readonly) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (nonatomic) unsigned long long filteringType;
@property (nonatomic, readonly) NSArray *filteredLocationNodes;

- (id)initWithSortedMomentNodes:(id)arg1 locationNodes:(id)arg2 incompleteLocationResolver:(id)arg3;
- (id)_filteredSignificantLocationNodes;

@end
