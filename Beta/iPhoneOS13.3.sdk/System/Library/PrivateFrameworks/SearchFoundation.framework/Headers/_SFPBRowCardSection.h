/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBRowCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _imageIsRightAligned;
    _Bool _keyNoWrap;
    _Bool _valueNoWrap;
    _Bool _cardPaddingBottom;
    int _separatorStyle;
    int _keyWeight;
    int _valueWeight;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_image;
    _SFPBRichText *_leadingText;
    _SFPBRichText *_trailingText;
    _SFPBImage *_attributionImage;
    NSString *_key;
    NSString *_value;
    _SFPBRichText *_leadingSubtitle;
    _SFPBRichText *_trailingSubtitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) _Bool imageIsRightAligned;
@property (retain, nonatomic) _SFPBRichText *leadingText;
@property (retain, nonatomic) _SFPBRichText *trailingText;
@property (retain, nonatomic) _SFPBImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) _Bool keyNoWrap;
@property (nonatomic) int keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) _Bool valueNoWrap;
@property (nonatomic) int valueWeight;
@property (nonatomic) _Bool cardPaddingBottom;
@property (retain, nonatomic) _SFPBRichText *leadingSubtitle;
@property (retain, nonatomic) _SFPBRichText *trailingSubtitle;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;

@end
