/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData, NSString, _PARResult_Template;

__attribute__((visibility("hidden")))
@interface _PARResult : PBCodable

{
    _Bool _renderHorizontallyWithOtherResultsInCategory;
    _Bool _isQuickGlance;
    float _score;
    int _maxAgeSeconds;
    float _serverScore;
    int _topHit;
    int _engagementScore;
    int _queryIndependentEngagementScore;
    int _placement;
    int _minimumRankOfTopHitToSuppressResult;
    NSString *_type;
    NSString *_identifier;
    NSString *_canonicalId;
    NSString *_dataServiceId;
    NSData *_feedback;
    NSString *_url;
    NSArray *_entities;
    NSString *_appleReferrer;
    NSString *_sectionBundleId;
    NSString *_bundleId;
    NSString *_adamId;
    _PARResult_Template *_template;
    NSString *_intendedQuery;
    NSString *_correctedQuery;
    NSString *_completedQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)clearEntities;
- (void)addEntities:(id)arg1;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;

@end
