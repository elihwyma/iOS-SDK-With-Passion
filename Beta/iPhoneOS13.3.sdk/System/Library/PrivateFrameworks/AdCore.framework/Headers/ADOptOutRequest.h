/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface ADOptOutRequest : PBRequest

{
    double _statusChangeTimestamp;
    double _transmitTimestamp;
    NSData *_dPID;
    NSData *_iAdID;
    float _timezone;
    _Bool _optedOutStatus;
    struct {
        unsigned int statusChangeTimestamp:1;
        unsigned int transmitTimestamp:1;
        unsigned int timezone:1;
        unsigned int optedOutStatus:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIAdID;
@property (retain, nonatomic) NSData *iAdID;
@property (nonatomic) _Bool hasOptedOutStatus;
@property (nonatomic) _Bool optedOutStatus;
@property (nonatomic) _Bool hasTransmitTimestamp;
@property (nonatomic) double transmitTimestamp;
@property (nonatomic) _Bool hasStatusChangeTimestamp;
@property (nonatomic) double statusChangeTimestamp;
@property (nonatomic) _Bool hasTimezone;
@property (nonatomic) float timezone;
@property (nonatomic, readonly) _Bool hasDPID;
@property (retain, nonatomic) NSData *dPID;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
