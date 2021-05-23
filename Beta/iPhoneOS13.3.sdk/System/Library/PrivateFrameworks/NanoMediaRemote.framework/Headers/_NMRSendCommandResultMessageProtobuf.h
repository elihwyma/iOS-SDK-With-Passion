/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface _NMRSendCommandResultMessageProtobuf : PBCodable

{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _handlerReturnStatus;
    double _timestamp;
    unsigned int _errorCode;
    int _originIdentifier;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int originIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, readonly) unsigned long long handlerReturnStatusCount;
@property (nonatomic, readonly) unsigned int *handlerReturnStatus;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
- (void)clearHandlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (void)addHandlerReturnStatus:(unsigned int)arg1;
- (void)setHandlerReturnStatus:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
