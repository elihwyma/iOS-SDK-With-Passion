/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable

{
    NSString *_composedMessageId;
    int _progress;
    struct {
        unsigned int progress:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasComposedMessageId;
@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) _Bool hasProgress;
@property (nonatomic) int progress;

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
