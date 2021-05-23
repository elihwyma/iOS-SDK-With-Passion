/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFTitleCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFCard, SFColor, SFImage, SFRichText, SFUserReportRequest;

@interface SFRichTitleCardSection : SFTitleCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isCentered:1;
        unsigned int reviewNewLine:1;
        unsigned int auxiliaryBottomTextColor:1;
        unsigned int hideVerticalDivider:1;
        unsigned int titleAlign:1;
        unsigned int titleNoWrap:1;
        unsigned int thumbnailCropCircle:1;
        unsigned int playActionAlign:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isCentered;
    _Bool _reviewNewLine;
    _Bool _hideVerticalDivider;
    _Bool _titleNoWrap;
    _Bool _thumbnailCropCircle;
    int _separatorStyle;
    int _auxiliaryBottomTextColor;
    int _titleAlign;
    int _playActionAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    NSString *_contentAdvisory;
    SFImage *_titleImage;
    NSString *_descriptionText;
    NSNumber *_rating;
    NSString *_ratingText;
    SFImage *_reviewGlyph;
    NSString *_reviewText;
    NSArray *_moreGlyphs;
    NSString *_auxiliaryTopText;
    NSString *_auxiliaryMiddleText;
    NSString *_auxiliaryBottomText;
    NSNumber *_auxiliaryAlignment;
    NSNumber *_titleWeight;
    SFImage *_imageOverlay;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_footnote;
    SFRichText *_richSubtitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool hideDivider;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFUserReportRequest *userReportRequest;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) _Bool isCentered;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *titleImage;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) NSString *ratingText;
@property (retain, nonatomic) SFImage *reviewGlyph;
@property (copy, nonatomic) NSString *reviewText;
@property (nonatomic) _Bool reviewNewLine;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (copy, nonatomic) NSNumber *auxiliaryAlignment;
@property (nonatomic) _Bool hideVerticalDivider;
@property (nonatomic) int titleAlign;
@property (copy, nonatomic) NSNumber *titleWeight;
@property (nonatomic) _Bool titleNoWrap;
@property (nonatomic) _Bool thumbnailCropCircle;
@property (retain, nonatomic) SFImage *imageOverlay;
@property (retain, nonatomic) SFActionItem *playAction;
@property (nonatomic) int playActionAlign;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) SFRichText *richSubtitle;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasCanBeHidden;
- (_Bool)hasHasTopPadding;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasTitleNoWrap;
- (_Bool)hasIsCentered;
- (_Bool)hasReviewNewLine;
- (_Bool)hasAuxiliaryBottomTextColor;
- (_Bool)hasHideVerticalDivider;
- (_Bool)hasTitleAlign;
- (_Bool)hasThumbnailCropCircle;
- (_Bool)hasPlayActionAlign;

@end
