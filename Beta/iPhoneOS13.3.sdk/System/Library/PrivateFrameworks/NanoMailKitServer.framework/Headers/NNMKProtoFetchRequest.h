/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface NNMKProtoFetchRequest : PBRequest

{
    NSString *_conversationId;
    NSData *_currentDateForRequestingMoreMessages;
    NSData *_currentMessageIdsAndStatus;
    unsigned int _fullSyncVersion;
    NSString *_mailboxId;
    _Bool _wantsBatchedResponse;
    _Bool _willTrimDatabaseAfterResults;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int wantsBatchedResponse:1;
        unsigned int willTrimDatabaseAfterResults:1;
    } _has;
}

@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) _Bool hasWantsBatchedResponse;
@property (nonatomic) _Bool wantsBatchedResponse;
@property (nonatomic, readonly) _Bool hasCurrentMessageIdsAndStatus;
@property (retain, nonatomic) NSData *currentMessageIdsAndStatus;
@property (nonatomic, readonly) _Bool hasCurrentDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *currentDateForRequestingMoreMessages;
@property (nonatomic) _Bool hasWillTrimDatabaseAfterResults;
@property (nonatomic) _Bool willTrimDatabaseAfterResults;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;

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
