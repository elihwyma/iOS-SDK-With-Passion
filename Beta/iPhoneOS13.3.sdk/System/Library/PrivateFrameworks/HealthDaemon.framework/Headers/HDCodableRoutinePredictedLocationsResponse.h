/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <Swift>

{
    NSMutableArray *_predictedLocationsOfInterests;
}

@property (retain, nonatomic) NSMutableArray *predictedLocationsOfInterests;

+ (Class)predictedLocationsOfInterestType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPredictedLocationsOfInterest:(id)arg1;
- (unsigned long long)predictedLocationsOfInterestsCount;
- (void)clearPredictedLocationsOfInterests;
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1;

@end
