/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, _MRTextEditingAttributesProtobuf;

@interface _MRKeyboardMessageProtobuf : PBCodable

{
    _MRTextEditingAttributesProtobuf *_attributes;
    NSData *_encryptedTextCyphertext;
    int _state;
    CDStruct_5accba53 _has;
}

@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic, readonly) _Bool hasAttributes;
@property (retain, nonatomic) _MRTextEditingAttributesProtobuf *attributes;
@property (nonatomic, readonly) _Bool hasEncryptedTextCyphertext;
@property (retain, nonatomic) NSData *encryptedTextCyphertext;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)stateAsString:(int)arg1;
- (int)StringAsState:(id)arg1;

@end
