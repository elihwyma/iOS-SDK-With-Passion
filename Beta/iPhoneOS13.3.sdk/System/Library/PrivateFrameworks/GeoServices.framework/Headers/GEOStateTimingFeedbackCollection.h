/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOStateTimingFeedbackCollection : PBCodable

{
    struct GEOSessionID _sessionID;
    double _durationInOldState;
    double _sessionRelativeTimestamp;
    NSMutableArray *_stateTransitions;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_durationInOldState:1;
        unsigned int has_sessionRelativeTimestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (retain, nonatomic) NSMutableArray *stateTransitions;
@property (nonatomic) _Bool hasDurationInOldState;
@property (nonatomic) double durationInOldState;
@property (nonatomic) _Bool hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;

+ (_Bool)isValid:(id)arg1;
+ (Class)stateTransitionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)addStateTransition:(id)arg1;
- (unsigned long long)stateTransitionsCount;
- (void)clearStateTransitions;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;

@end
