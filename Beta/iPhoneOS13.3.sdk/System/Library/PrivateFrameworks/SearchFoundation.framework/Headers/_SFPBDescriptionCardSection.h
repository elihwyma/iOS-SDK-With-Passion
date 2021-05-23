/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBURL;

@interface _SFPBDescriptionCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _titleNoWrap;
    _Bool _descriptionExpand;
    int _separatorStyle;
    int _titleWeight;
    int _descriptionSize;
    int _descriptionWeight;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    _SFPBText *_descriptionText;
    NSString *_expandText;
    _SFPBImage *_image;
    NSString *_attributionText;
    _SFPBURL *_attributionURL;
    _SFPBImage *_attributionGlyph;
    NSArray *_richDescriptions;
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
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) _SFPBText *descriptionText;
@property (copy, nonatomic) NSString *expandText;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) _Bool titleNoWrap;
@property (nonatomic) int titleWeight;
@property (nonatomic) int descriptionSize;
@property (nonatomic) int descriptionWeight;
@property (nonatomic) _Bool descriptionExpand;
@property (nonatomic) int imageAlign;
@property (nonatomic) int textAlign;
@property (copy, nonatomic) NSString *attributionText;
@property (retain, nonatomic) _SFPBURL *attributionURL;
@property (retain, nonatomic) _SFPBImage *attributionGlyph;
@property (copy, nonatomic) NSArray *richDescriptions;
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
- (void)addRichDescriptions:(id)arg1;
- (void)clearRichDescriptions;
- (unsigned long long)richDescriptionsCount;
- (id)richDescriptionsAtIndex:(unsigned long long)arg1;

@end
