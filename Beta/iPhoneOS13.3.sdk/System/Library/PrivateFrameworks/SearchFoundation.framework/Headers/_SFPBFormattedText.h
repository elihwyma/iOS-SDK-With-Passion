/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString, _SFPBImage, _SFPBText;

@interface _SFPBFormattedText : PBCodable <Swift>

{
    _Bool _isEmphasized;
    _Bool _isBold;
    int _textColor;
    _SFPBText *_text;
    _SFPBImage *_glyph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SFPBText *text;
@property (retain, nonatomic) _SFPBImage *glyph;
@property (nonatomic) _Bool isEmphasized;
@property (nonatomic) _Bool isBold;
@property (nonatomic) int textColor;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
