/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOABExperimentAssignment, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOUsageCollectionRequest : PBRequest

{
    PBDataReader *_reader;
    NSMutableArray *_abExperimentAssignments;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    NSMutableArray *_timeToLeaveHypothesisFeedbackCollections;
    NSMutableArray *_timeToLeaveInitialTravelTimeFeedbackCollections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_abExperimentAssignments:1;
        unsigned int read_tilesAbExperimentAssignment:1;
        unsigned int read_timeToLeaveHypothesisFeedbackCollections:1;
        unsigned int read_timeToLeaveInitialTravelTimeFeedbackCollections:1;
        unsigned int wrote_abExperimentAssignments:1;
        unsigned int wrote_tilesAbExperimentAssignment:1;
        unsigned int wrote_timeToLeaveHypothesisFeedbackCollections:1;
        unsigned int wrote_timeToLeaveInitialTravelTimeFeedbackCollections:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *abExperimentAssignments;
@property (retain, nonatomic) NSMutableArray *timeToLeaveHypothesisFeedbackCollections;
@property (retain, nonatomic) NSMutableArray *timeToLeaveInitialTravelTimeFeedbackCollections;
@property (nonatomic, readonly) _Bool hasTilesAbExperimentAssignment;
@property (retain, nonatomic) GEOABExperimentAssignment *tilesAbExperimentAssignment;

+ (_Bool)isValid:(id)arg1;
+ (Class)abExperimentAssignmentType;
+ (Class)timeToLeaveHypothesisFeedbackCollectionType;
+ (Class)timeToLeaveInitialTravelTimeFeedbackCollectionType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)_readAbExperimentAssignments;
- (void)_addNoFlagsAbExperimentAssignment:(id)arg1;
- (void)_readTimeToLeaveHypothesisFeedbackCollections;
- (void)_addNoFlagsTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (void)_readTimeToLeaveInitialTravelTimeFeedbackCollections;
- (void)_addNoFlagsTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;
- (void)_readTilesAbExperimentAssignment;
- (unsigned long long)abExperimentAssignmentsCount;
- (void)clearAbExperimentAssignments;
- (id)abExperimentAssignmentAtIndex:(unsigned long long)arg1;
- (void)addAbExperimentAssignment:(id)arg1;
- (unsigned long long)timeToLeaveHypothesisFeedbackCollectionsCount;
- (void)clearTimeToLeaveHypothesisFeedbackCollections;
- (id)timeToLeaveHypothesisFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)addTimeToLeaveHypothesisFeedbackCollection:(id)arg1;
- (unsigned long long)timeToLeaveInitialTravelTimeFeedbackCollectionsCount;
- (void)clearTimeToLeaveInitialTravelTimeFeedbackCollections;
- (id)timeToLeaveInitialTravelTimeFeedbackCollectionAtIndex:(unsigned long long)arg1;
- (void)addTimeToLeaveInitialTravelTimeFeedbackCollection:(id)arg1;

@end
