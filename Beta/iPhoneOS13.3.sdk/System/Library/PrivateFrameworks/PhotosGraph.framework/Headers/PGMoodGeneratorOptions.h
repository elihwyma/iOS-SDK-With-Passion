/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSSet;

@interface PGMoodGeneratorOptions : NSObject

{
    unsigned long long _memoryCategory;
    unsigned long long _memorySubcategory;
    NSArray *_moodHistory;
    NSSet *_momentIDs;
    NSDate *_referenceDate;
    NSArray *_prefetchedAssets;
    NSDictionary *_sceneIdentifiersByMomentNodeIdentifier;
}

@property (retain) NSArray *prefetchedAssets;
@property (retain) NSDictionary *sceneIdentifiersByMomentNodeIdentifier;
@property (retain) NSSet *momentIDs;
@property (retain) NSDate *referenceDate;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) NSArray *moodHistory;

@end
