/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRTextInputTraitsProtobuf;

@interface _MRTextEditingAttributesProtobuf : PBCodable

{
    _MRTextInputTraitsProtobuf *_inputTraits;
    NSString *_prompt;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasPrompt;
@property (retain, nonatomic) NSString *prompt;
@property (nonatomic, readonly) _Bool hasInputTraits;
@property (retain, nonatomic) _MRTextInputTraitsProtobuf *inputTraits;

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
