/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable

{
    NSString *_assetVersion;
    NSMutableArray *_experimentalGroups;
    NSMutableArray *_extractedDonations;
    PPPBFeedbackMetadata *_feedbackMetadata;
    NSString *_homeLocationGeohash;
    int _predictionType;
    NSMutableArray *_scoredItems;
    struct {
        unsigned int predictionType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFeedbackMetadata;
@property (retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata;
@property (nonatomic) _Bool hasPredictionType;
@property (nonatomic) int predictionType;
@property (retain, nonatomic) NSMutableArray *scoredItems;
@property (retain, nonatomic) NSMutableArray *extractedDonations;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (nonatomic, readonly) _Bool hasHomeLocationGeohash;
@property (retain, nonatomic) NSString *homeLocationGeohash;
@property (nonatomic, readonly) _Bool hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (Class)scoredItemsType;
+ (Class)extractedDonationsType;
+ (Class)experimentalGroupsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearScoredItems;
- (void)addScoredItems:(id)arg1;
- (unsigned long long)scoredItemsCount;
- (id)scoredItemsAtIndex:(unsigned long long)arg1;
- (void)clearExtractedDonations;
- (void)addExtractedDonations:(id)arg1;
- (unsigned long long)extractedDonationsCount;
- (id)extractedDonationsAtIndex:(unsigned long long)arg1;
- (void)clearExperimentalGroups;
- (void)addExperimentalGroups:(id)arg1;
- (unsigned long long)experimentalGroupsCount;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;

@end
