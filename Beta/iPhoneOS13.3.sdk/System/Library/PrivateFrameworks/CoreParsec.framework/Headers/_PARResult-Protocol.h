/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString, _PARResult_Template;

@protocol _PARResult <Swift>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *dataServiceId;
@property (nonatomic) float score;
@property (copy, nonatomic) NSData *feedback;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) int maxAgeSeconds;
@property (nonatomic) float serverScore;
@property (copy, nonatomic) NSArray *entities;
@property (nonatomic) int topHit;
@property (nonatomic) int engagementScore;
@property (nonatomic) int queryIndependentEngagementScore;
@property (nonatomic) int placement;
@property (nonatomic) _Bool renderHorizontallyWithOtherResultsInCategory;
@property (nonatomic) _Bool isQuickGlance;
@property (nonatomic) int minimumRankOfTopHitToSuppressResult;
@property (copy, nonatomic) NSString *appleReferrer;
@property (copy, nonatomic) NSString *sectionBundleId;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *adamId;
@property (retain, nonatomic) _PARResult_Template *template;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)clearEntities;
- (unsigned short)addEntities: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)entitiesCount;

@end
