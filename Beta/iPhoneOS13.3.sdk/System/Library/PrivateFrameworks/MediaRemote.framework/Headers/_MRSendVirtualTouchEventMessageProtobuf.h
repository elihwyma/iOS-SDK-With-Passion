/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable

{
    unsigned long long _virtualDeviceID;
    _MRVirtualTouchEventProtobuf *_event;
    struct {
        unsigned int virtualDeviceID:1;
    } _has;
}

@property (nonatomic) _Bool hasVirtualDeviceID;
@property (nonatomic) unsigned long long virtualDeviceID;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) _MRVirtualTouchEventProtobuf *event;

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
