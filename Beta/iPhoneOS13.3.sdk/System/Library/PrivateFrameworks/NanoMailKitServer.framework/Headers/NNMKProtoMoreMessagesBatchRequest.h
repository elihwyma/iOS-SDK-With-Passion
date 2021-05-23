/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NNMKProtoMoreMessagesBatchRequest : PBRequest

{
    unsigned int _fullSyncVersion;
    NSMutableArray *_moreMessagesRequests;
    CDStruct_a125a100 _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (retain, nonatomic) NSMutableArray *moreMessagesRequests;

+ (Class)moreMessagesRequestType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMoreMessagesRequest:(id)arg1;
- (unsigned long long)moreMessagesRequestsCount;
- (void)clearMoreMessagesRequests;
- (id)moreMessagesRequestAtIndex:(unsigned long long)arg1;

@end
