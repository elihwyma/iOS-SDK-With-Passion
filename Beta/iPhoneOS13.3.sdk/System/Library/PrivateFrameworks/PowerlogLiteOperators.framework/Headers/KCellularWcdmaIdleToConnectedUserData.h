/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface KCellularWcdmaIdleToConnectedUserData : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _subsId;
    NSData *_userData;
    _Bool _isUplink;
    CDStruct_30075cd8 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasIsUplink;
@property (nonatomic) _Bool isUplink;
@property (nonatomic, readonly) _Bool hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

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
