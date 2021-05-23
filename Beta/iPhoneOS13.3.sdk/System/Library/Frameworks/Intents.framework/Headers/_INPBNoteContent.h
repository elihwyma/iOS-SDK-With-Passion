/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBImageNoteContent, _INPBTextNoteContent;

@interface _INPBNoteContent : PBCodable <Swift>

{
    CDStruct_f953fb60 _has;
    _Bool __encodeLegacyGloryData;
    int _type;
    _INPBImageNoteContent *_image;
    _INPBTextNoteContent *_text;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBImageNoteContent *image;
@property (nonatomic, readonly) _Bool hasImage;
@property (retain, nonatomic) _INPBTextNoteContent *text;
@property (nonatomic, readonly) _Bool hasText;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
