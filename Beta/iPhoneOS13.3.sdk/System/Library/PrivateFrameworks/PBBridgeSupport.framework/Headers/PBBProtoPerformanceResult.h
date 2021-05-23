/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PBBProtoPerformanceResult : PBCodable

{
    double _timeDelta;
    double _timeEnded;
    double _timeStarted;
    NSString *_activityType;
    NSString *_identifier;
    struct {
        unsigned int timeDelta:1;
        unsigned int timeEnded:1;
        unsigned int timeStarted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasActivityType;
@property (retain, nonatomic) NSString *activityType;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasTimeDelta;
@property (nonatomic) double timeDelta;
@property (nonatomic) _Bool hasTimeStarted;
@property (nonatomic) double timeStarted;
@property (nonatomic) _Bool hasTimeEnded;
@property (nonatomic) double timeEnded;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)detailedDescription;

@end
