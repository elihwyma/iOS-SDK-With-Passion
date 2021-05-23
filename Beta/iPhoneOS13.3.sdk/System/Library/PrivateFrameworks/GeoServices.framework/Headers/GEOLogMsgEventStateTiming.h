/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgEventStateTiming : PBCodable

{
    double _durationInOldState;
    NSMutableArray *_stateTransitionFeedbacks;
    struct {
        unsigned int has_durationInOldState:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *stateTransitionFeedbacks;
@property (nonatomic) _Bool hasDurationInOldState;
@property (nonatomic) double durationInOldState;

+ (_Bool)isValid:(id)arg1;
+ (Class)stateTransitionFeedbackType;

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
- (void)addStateTransitionFeedback:(id)arg1;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)clearStateTransitionFeedbacks;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1;

@end
