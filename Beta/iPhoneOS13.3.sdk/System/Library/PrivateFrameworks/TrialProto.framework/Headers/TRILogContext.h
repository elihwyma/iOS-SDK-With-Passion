/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TRILogTime;

@interface TRILogContext : PBCodable

{
    TRILogTime *_deviceLogTime;
    TRILogTime *_deviceTrackingTime;
    unsigned int _projectId;
    NSString *_trackingId;
    struct {
        unsigned int projectId:1;
    } _has;
}

@property (nonatomic) _Bool hasProjectId;
@property (nonatomic) unsigned int projectId;
@property (nonatomic, readonly) _Bool hasTrackingId;
@property (retain, nonatomic) NSString *trackingId;
@property (nonatomic, readonly) _Bool hasDeviceLogTime;
@property (retain, nonatomic) TRILogTime *deviceLogTime;
@property (nonatomic, readonly) _Bool hasDeviceTrackingTime;
@property (retain, nonatomic) TRILogTime *deviceTrackingTime;

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
