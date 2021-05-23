/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBImage, _SFPBRichText;

@interface _SFPBRichTitleCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isCentered;
    _Bool _reviewNewLine;
    _Bool _hideVerticalDivider;
    _Bool _titleNoWrap;
    _Bool _thumbnailCropCircle;
    int _separatorStyle;
    float _rating;
    int _auxiliaryBottomTextColor;
    int _auxiliaryAlignment;
    int _titleAlign;
    int _titleWeight;
    int _playActionAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentAdvisory;
    _SFPBImage *_titleImage;
    NSString *_descriptionText;
    NSString *_ratingText;
    _SFPBImage *_reviewGlyph;
    NSString *_reviewText;
    NSArray *_moreGlyphs;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    _SFPBImage *_imageOverlay;
    _SFPBActionItem *_playAction;
    NSArray *_offers;
    NSString *_footnote;
    _SFPBRichText *_richSubtitle;
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
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) _SFPBImage *titleImage;
@property (nonatomic) _Bool isCentered;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) float rating;
@property (copy, nonatomic) NSString *ratingText;
@property (retain, nonatomic) _SFPBImage *reviewGlyph;
@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) _Bool reviewNewLine;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (nonatomic) int auxiliaryAlignment;
@property (nonatomic) _Bool hideVerticalDivider;
@property (nonatomic) int titleAlign;
@property (nonatomic) int titleWeight;
@property (nonatomic) _Bool titleNoWrap;
@property (nonatomic) _Bool thumbnailCropCircle;
@property (retain, nonatomic) _SFPBImage *imageOverlay;
@property (retain, nonatomic) _SFPBActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) _SFPBRichText *richSubtitle;
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
- (void)addOffers:(id)arg1;
- (void)clearOffers;
- (unsigned long long)offersCount;
- (id)offersAtIndex:(unsigned long long)arg1;
- (void)addMoreGlyphs:(id)arg1;
- (void)clearMoreGlyphs;
- (unsigned long long)moreGlyphsCount;
- (id)moreGlyphsAtIndex:(unsigned long long)arg1;

@end
