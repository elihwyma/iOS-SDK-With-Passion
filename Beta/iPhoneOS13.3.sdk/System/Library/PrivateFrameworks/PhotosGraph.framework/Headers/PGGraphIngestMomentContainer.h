/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSDate, NSNumber, NSString, PGManager;

@interface PGGraphIngestMomentContainer : NSObject

{
    CLSClueCollection *_clueCollection;
    CLSInvestigationPhotoKitFeeder *_feeder;
    NSNumber *_isInterestingNumber;
    NSNumber *_isSmartInterestingNumber;
    NSNumber *_contentScoreNumber;
    PGManager *_manager;
}

@property (retain, nonatomic) CLSClueCollection *clueCollection;
@property (retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder;
@property (retain, nonatomic) NSNumber *isInterestingNumber;
@property (retain, nonatomic) NSNumber *isSmartInterestingNumber;
@property (retain, nonatomic) NSNumber *contentScoreNumber;
@property (retain, nonatomic) PGManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3;
- (void)_computeScoresIfNeeded;

@end
