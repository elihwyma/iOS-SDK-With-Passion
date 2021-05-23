/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ASCodableCloudKitNotificationEvent : PBCodable

{
    double _date;
    long long _triggerSnapshotIndex;
    long long _type;
    NSData *_triggerUUID;
    struct {
        unsigned int date:1;
        unsigned int triggerSnapshotIndex:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic, readonly) _Bool hasTriggerUUID;
@property (retain, nonatomic) NSData *triggerUUID;
@property (nonatomic) _Bool hasTriggerSnapshotIndex;
@property (nonatomic) long long triggerSnapshotIndex;

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
