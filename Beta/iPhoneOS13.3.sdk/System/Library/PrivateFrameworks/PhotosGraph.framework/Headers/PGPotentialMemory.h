/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSDate, NSDictionary, NSSet, NSString, PGGraphMomentNode, PGMemoryGenerator, PHAssetCollection;

@interface PGPotentialMemory : NSObject

{
    PHAssetCollection *_assetCollection;
    PGGraphMomentNode *_momentNode;
    NSSet *_momentNodes;
    long long _sourceType;
    unsigned long long _category;
    unsigned long long _subcategory;
    double _score;
    NSDate *_localDate;
    CLLocation *_location;
    NSSet *_peopleUUIDs;
    NSString *_eventName;
    double _contentScore;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSSet *_features;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
    PGPotentialMemory *_upgradedPotentialMemory;
    PGMemoryGenerator *_upgradedMemoryGenerator;
}

@property (retain) PHAssetCollection *assetCollection;
@property (retain) PGGraphMomentNode *momentNode;
@property (retain) NSSet *momentNodes;
@property long long sourceType;
@property unsigned long long category;
@property unsigned long long subcategory;
@property double score;
@property (retain) NSDate *localDate;
@property (retain) CLLocation *location;
@property (retain) NSSet *peopleUUIDs;
@property (retain) NSString *eventName;
@property double contentScore;
@property (retain) NSSet *features;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSSet *momentIDs;
@property (readonly) NSDictionary *numberOfAssetsByMomentIDs;
@property (retain, nonatomic) PGPotentialMemory *upgradedPotentialMemory;
@property (retain, nonatomic) PGMemoryGenerator *upgradedMemoryGenerator;

- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNode:(id)arg3;
- (void)_prepareForOverlapCheck;
- (void)_resetOverlapCheck;
- (double)computeContentScoreUsingMemoryController:(id)arg1;
- (id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2;

@end
