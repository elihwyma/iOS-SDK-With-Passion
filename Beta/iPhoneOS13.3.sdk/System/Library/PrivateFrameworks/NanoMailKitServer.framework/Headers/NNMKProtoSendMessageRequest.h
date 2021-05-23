/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString;

@interface NNMKProtoSendMessageRequest : PBRequest

{
    NSString *_body;
    NSMutableArray *_ccs;
    NSString *_composedMessageId;
    NSString *_referenceMessageId;
    unsigned int _sendingType;
    NSString *_subject;
    NSMutableArray *_tos;
    _Bool _includeAttachments;
    struct {
        unsigned int sendingType:1;
        unsigned int includeAttachments:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *tos;
@property (retain, nonatomic) NSMutableArray *ccs;
@property (nonatomic, readonly) _Bool hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (nonatomic, readonly) _Bool hasBody;
@property (retain, nonatomic) NSString *body;
@property (nonatomic, readonly) _Bool hasComposedMessageId;
@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) _Bool hasSendingType;
@property (nonatomic) unsigned int sendingType;
@property (nonatomic, readonly) _Bool hasReferenceMessageId;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (nonatomic) _Bool hasIncludeAttachments;
@property (nonatomic) _Bool includeAttachments;

+ (Class)toType;
+ (Class)ccType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addTo:(id)arg1;
- (void)addCc:(id)arg1;
- (unsigned long long)tosCount;
- (void)clearTos;
- (id)toAtIndex:(unsigned long long)arg1;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (id)ccAtIndex:(unsigned long long)arg1;

@end
