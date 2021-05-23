/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NNMKProtoMoreMessagesRequest : PBRequest

{
    NSData *_beforeDateReceived;
    unsigned int _filterType;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    struct {
        unsigned int filterType:1;
        unsigned int fullSyncVersion:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasBeforeDateReceived;
@property (retain, nonatomic) NSData *beforeDateReceived;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) _Bool hasFilterType;
@property (nonatomic) unsigned int filterType;

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
