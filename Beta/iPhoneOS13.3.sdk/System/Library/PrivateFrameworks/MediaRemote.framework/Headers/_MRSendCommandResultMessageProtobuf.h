/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf;

@interface _MRSendCommandResultMessageProtobuf : PBCodable

{
    CDStruct_95bda58d _handlerReturnStatus;
    NSString *_commandID;
    NSMutableArray *_handlerReturnStatusDatas;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    int _sendError;
    struct {
        unsigned int sendError:1;
    } _has;
}

@property (nonatomic) _Bool hasSendError;
@property (nonatomic) int sendError;
@property (nonatomic, readonly) unsigned long long handlerReturnStatusCount;
@property (nonatomic, readonly) int *handlerReturnStatus;
@property (retain, nonatomic) NSMutableArray *handlerReturnStatusDatas;
@property (nonatomic, readonly) _Bool hasCommandID;
@property (retain, nonatomic) NSString *commandID;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)handlerReturnStatusDataType;

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
- (void)addHandlerReturnStatusData:(id)arg1;
- (void)clearHandlerReturnStatus;
- (int)handlerReturnStatusAtIndex:(unsigned long long)arg1;
- (void)addHandlerReturnStatus:(int)arg1;
- (unsigned long long)handlerReturnStatusDatasCount;
- (void)clearHandlerReturnStatusDatas;
- (id)handlerReturnStatusDataAtIndex:(unsigned long long)arg1;
- (id)sendErrorAsString:(int)arg1;
- (int)StringAsSendError:(id)arg1;
- (void)setHandlerReturnStatus:(int *)arg1 count:(unsigned long long)arg2;
- (id)handlerReturnStatusAsString:(int)arg1;
- (int)StringAsHandlerReturnStatus:(id)arg1;

@end
