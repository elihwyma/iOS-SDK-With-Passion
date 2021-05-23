/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitRoutineLocation : PBCodable <Swift>

{
    long long _confidenceMillis;
    long long _recentVisitCount;
    long long _uncertaintyMillis;
    int _locationType;
    NSString *_locationUUID;
    struct {
        unsigned int confidenceMillis:1;
        unsigned int recentVisitCount:1;
        unsigned int uncertaintyMillis:1;
        unsigned int locationType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLocationUUID;
@property (retain, nonatomic) NSString *locationUUID;
@property (nonatomic) _Bool hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) _Bool hasUncertaintyMillis;
@property (nonatomic) long long uncertaintyMillis;
@property (nonatomic) _Bool hasConfidenceMillis;
@property (nonatomic) long long confidenceMillis;
@property (nonatomic) _Bool hasRecentVisitCount;
@property (nonatomic) long long recentVisitCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
- (int)StringAsLocationType:(id)arg1;

@end
