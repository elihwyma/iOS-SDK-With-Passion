/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueProtobuf : PBCodable

{
    NSMutableArray *_contentItems;
    _MRPlaybackQueueContextProtobuf *_context;
    int _location;
    NSString *_queueIdentifier;
    NSString *_requestID;
    _MRNowPlayingPlayerPathProtobuf *_resolvedPlayerPath;
    _Bool _sendingPlaybackQueueTransaction;
    struct {
        unsigned int location:1;
        unsigned int sendingPlaybackQueueTransaction:1;
    } _has;
}

@property (nonatomic) _Bool hasLocation;
@property (nonatomic) int location;
@property (retain, nonatomic) NSMutableArray *contentItems;
@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) _Bool hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic, readonly) _Bool hasResolvedPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) _Bool hasSendingPlaybackQueueTransaction;
@property (nonatomic) _Bool sendingPlaybackQueueTransaction;
@property (nonatomic, readonly) _Bool hasQueueIdentifier;
@property (retain, nonatomic) NSString *queueIdentifier;

+ (Class)contentItemType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)contentItemsCount;
- (void)clearContentItems;
- (void)addContentItem:(id)arg1;
- (id)contentItemAtIndex:(unsigned long long)arg1;

@end
