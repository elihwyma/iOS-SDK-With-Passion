/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, PBDataReader;

@interface GEODirectionsFeedback : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_alightNotificationFeedbacks;
    NSData *_directionResponseID;
    NSMutableArray *_guidanceFeedbacks;
    NSMutableArray *_modalitys;
    NSMutableArray *_stepFeedbacks;
    NSMutableArray *_trafficRerouteFeedbacks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_alightNotificationFeedbacks:1;
        unsigned int read_directionResponseID:1;
        unsigned int read_guidanceFeedbacks:1;
        unsigned int read_modalitys:1;
        unsigned int read_stepFeedbacks:1;
        unsigned int read_trafficRerouteFeedbacks:1;
        unsigned int wrote_alightNotificationFeedbacks:1;
        unsigned int wrote_directionResponseID:1;
        unsigned int wrote_guidanceFeedbacks:1;
        unsigned int wrote_modalitys:1;
        unsigned int wrote_stepFeedbacks:1;
        unsigned int wrote_trafficRerouteFeedbacks:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionResponseID;
@property (retain, nonatomic) NSData *directionResponseID;
@property (retain, nonatomic) NSMutableArray *stepFeedbacks;
@property (retain, nonatomic) NSMutableArray *trafficRerouteFeedbacks;
@property (retain, nonatomic) NSMutableArray *alightNotificationFeedbacks;
@property (retain, nonatomic) NSMutableArray *guidanceFeedbacks;
@property (retain, nonatomic) NSMutableArray *modalitys;

+ (_Bool)isValid:(id)arg1;
+ (Class)stepFeedbackType;
+ (Class)trafficRerouteFeedbackType;
+ (Class)alightNotificationFeedbackType;
+ (Class)guidanceFeedbackType;
+ (Class)modalityType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addGuidanceFeedback:(id)arg1;
- (void)addStepFeedback:(id)arg1;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (void)_readDirectionResponseID;
- (void)_readStepFeedbacks;
- (void)_addNoFlagsStepFeedback:(id)arg1;
- (void)_readTrafficRerouteFeedbacks;
- (void)_addNoFlagsTrafficRerouteFeedback:(id)arg1;
- (void)_readAlightNotificationFeedbacks;
- (void)_addNoFlagsAlightNotificationFeedback:(id)arg1;
- (void)_readGuidanceFeedbacks;
- (void)_addNoFlagsGuidanceFeedback:(id)arg1;
- (void)_readModalitys;
- (void)_addNoFlagsModality:(id)arg1;
- (unsigned long long)stepFeedbacksCount;
- (void)clearStepFeedbacks;
- (id)stepFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)trafficRerouteFeedbacksCount;
- (void)clearTrafficRerouteFeedbacks;
- (id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)alightNotificationFeedbacksCount;
- (void)clearAlightNotificationFeedbacks;
- (id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)guidanceFeedbacksCount;
- (void)clearGuidanceFeedbacks;
- (id)guidanceFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)modalitysCount;
- (void)clearModalitys;
- (id)modalityAtIndex:(unsigned long long)arg1;
- (void)addModality:(id)arg1;

@end
