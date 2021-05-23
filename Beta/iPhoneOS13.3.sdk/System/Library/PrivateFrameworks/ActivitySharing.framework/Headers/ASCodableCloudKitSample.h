/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ASCodableCloudKitSample : PBCodable

{
    double _endDate;
    double _startDate;
    NSData *_uuid;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) double endDate;

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
