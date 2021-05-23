/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable

{
    NSString *_messageId;
    unsigned int _statusVersion;
    unsigned int _updatedStatus;
    struct {
        unsigned int statusVersion:1;
        unsigned int updatedStatus:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) _Bool hasUpdatedStatus;
@property (nonatomic) unsigned int updatedStatus;
@property (nonatomic) _Bool hasStatusVersion;
@property (nonatomic) unsigned int statusVersion;

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
