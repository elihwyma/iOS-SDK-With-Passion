/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable

{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _deviceIDs;
    unsigned int _errorCode;
    CDStruct_70a7dc3e _has;
}

@property (nonatomic, readonly) unsigned long long deviceIDsCount;
@property (nonatomic, readonly) unsigned int *deviceIDs;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned int errorCode;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addDeviceIDs:(unsigned int)arg1;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)arg1;
- (void)clearDeviceIDs;
- (void)setDeviceIDs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
