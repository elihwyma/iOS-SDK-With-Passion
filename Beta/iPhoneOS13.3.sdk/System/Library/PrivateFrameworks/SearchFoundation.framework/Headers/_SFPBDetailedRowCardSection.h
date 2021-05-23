/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBButton, _SFPBColor, _SFPBFormattedText, _SFPBImage, _SFPBRichText;

@interface _SFPBDetailedRowCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _preventThumbnailImageScaling;
    _Bool _isSecondaryTitleDetached;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBImage *_thumbnail;
    _SFPBRichText *_title;
    _SFPBFormattedText *_secondaryTitle;
    _SFPBImage *_secondaryTitleImage;
    NSArray *_descriptions;
    _SFPBRichText *_footnote;
    _SFPBFormattedText *_trailingTopText;
    _SFPBFormattedText *_trailingMiddleText;
    _SFPBFormattedText *_trailingBottomText;
    _SFPBActionItem *_action;
    _SFPBButton *_button;
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
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (nonatomic) _Bool preventThumbnailImageScaling;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBFormattedText *secondaryTitle;
@property (retain, nonatomic) _SFPBImage *secondaryTitleImage;
@property (nonatomic) _Bool isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) _SFPBRichText *footnote;
@property (retain, nonatomic) _SFPBFormattedText *trailingTopText;
@property (retain, nonatomic) _SFPBFormattedText *trailingMiddleText;
@property (retain, nonatomic) _SFPBFormattedText *trailingBottomText;
@property (retain, nonatomic) _SFPBActionItem *action;
@property (retain, nonatomic) _SFPBButton *button;
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
- (void)addDescriptions:(id)arg1;
- (void)clearDescriptions;
- (unsigned long long)descriptionsCount;
- (id)descriptionsAtIndex:(unsigned long long)arg1;

@end
