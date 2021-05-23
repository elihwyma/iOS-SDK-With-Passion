/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSString;

@protocol PGGraphIngestMoment <Swift>

@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) _Bool isSmartInteresting;
@property (nonatomic, readonly) _Bool isInteresting;
@property (nonatomic, readonly) double contentScore;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) unsigned long long numberOfItemsWithPersons;
@property (nonatomic, readonly) unsigned long long totalNumberOfPersons;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) double inhabitationScore;
@property (nonatomic, readonly) _Bool hasHigherThanImprovedAssets;
@property (nonatomic, readonly) _Bool hasAssetsWithInterestingScenes;
@property (nonatomic, readonly) _Bool containsBetterScoringAsset;
@property (nonatomic, readonly) _Bool containsNonJunkAssets;
@property (nonatomic, readonly) unsigned long long numberOfShinyGemItems;
@property (nonatomic, readonly) unsigned long long numberOfRegularGemItems;
@property (nonatomic, readonly) double behavioralScore;

@end
