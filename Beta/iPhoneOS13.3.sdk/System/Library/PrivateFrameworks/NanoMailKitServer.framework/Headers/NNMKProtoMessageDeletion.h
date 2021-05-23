/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable

{
    unsigned int _deletionState;
    NSString *_messageId;
    struct {
        unsigned int deletionState:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (nonatomic) _Bool hasDeletionState;
@property (nonatomic) unsigned int deletionState;

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
