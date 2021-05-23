/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/Swift-Protocol.h>

@class NSDate, NSString, PGGraphHighlightGroupNode;

@interface PGGraphHighlightNode : PGGraphNode <Swift>

@property (readonly) NSString *localIdentifier;
@property (readonly) _Bool isPartOfTrip;
@property (readonly) _Bool isPartOfLongTrip;
@property (readonly) _Bool isPartOfShortTrip;
@property (readonly) _Bool isPartOfAggregation;
@property (readonly) _Bool isInteresting;
@property (readonly) _Bool hasOnlyMomentsAtWork;
@property (readonly) double neighborScore;
@property (readonly) unsigned long long numberOfRegularGemAssets;
@property (readonly) unsigned long long numberOfShinyGemAssets;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *UUID;
@property (readonly) double contentScore;
@property (readonly) NSDate *localStartDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *universalStartDate;
@property (readonly) NSDate *universalEndDate;
@property (readonly) _Bool isLongTrip;
@property (readonly) _Bool isShortTrip;
@property (readonly) _Bool isTrip;
@property (readonly) _Bool babyIsPresent;
@property (readonly) _Bool petIsPresent;
@property (readonly) _Bool hasLocation;
@property (readonly) _Bool happensPartiallyAtMyHome;
@property (readonly) _Bool happensPartiallyAtMyWork;
@property (nonatomic, readonly) NSString *uuid;
@property (readonly) _Bool isAggregation;

+ (id)pathFromMoment;
+ (id)pathToMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)scoreSortDescriptors;
+ (id)propertiesWithHighlight:(id)arg1;
+ (id)promotionScoreSortDescriptors;
+ (CDStruct_c591f335)_promotionScoreDescriptorWithMomentNodes:(id)arg1;
+ (double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(CDStruct_c591f335)arg1 isAggregation:(_Bool)arg2 enrichmentState:(unsigned short)arg3;
+ (id)otherVeryMeaningfulMeanings;
+ (double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(CDStruct_c591f335)arg1;
+ (double)averagePromotionScoreWithPromotionScoreDescriptor:(CDStruct_c591f335)arg1;
+ (double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(CDStruct_c591f335)arg1;
+ (double)promotionScoreWithHighlightNode:(id)arg1 enrichmentState:(unsigned short)arg2 numberOfExtendedAssets:(unsigned long long)arg3;

- (id)debugDictionary;
- (unsigned long long)numberOfAssets;
- (id)meaningLabels;
- (unsigned long long)numberOfMoments;
- (id)momentNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)addressNodes;
- (id)personNodes;
- (_Bool)startsAfterLocalDate:(id)arg1;
- (_Bool)endsBeforeLocalDate:(id)arg1;
- (id)sortedMomentNodes;
- (id)naturalLanguageFeatures;
- (id)timedEvent;
- (id)locatedEvent;
- (id)peopledEvent;
- (id)scenedEvent;
- (id)meaningfulEvent;
- (id)businessedEvent;
- (id)enrichableEvent;
- (id)relatableEvent;
- (id)dateNodes;
- (id)seasonNodes;
- (id)holidayNodes;
- (id)celebratedHolidayNodes;
- (id)poiNodes;
- (id)roiNodes;
- (_Bool)hasPeopleCountingMe:(_Bool)arg1;
- (id)socialGroupNodes;
- (id)sceneNodes;
- (id)highConfidenceSceneNodes;
- (id)searchConfidenceSceneNodes;
- (id)businessNodes;
- (id)publicEventNodes;
- (void)enumerateBusinessesUsingBlock:(CDUnknownBlockType)arg1;
- (id)fetchAssetCollection;
- (double)weightForMoment:(id)arg1;
- (id)photoEvent;
- (id)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)reliableMeaningLabels;
- (id)birthdayPersonNode;
- (id)anniversaryPersonNode;
- (_Bool)isSmartInteresting;
- (id)meaningNodes;
- (void)enumerateMeaningNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)relatableNode;

@end
