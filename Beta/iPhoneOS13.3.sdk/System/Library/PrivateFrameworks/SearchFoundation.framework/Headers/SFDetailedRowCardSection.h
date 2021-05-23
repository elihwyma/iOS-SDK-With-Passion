/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFButton, SFCard, SFColor, SFFormattedText, SFImage, SFRichText, SFUserReportRequest;

@interface SFDetailedRowCardSection : SFCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int preventThumbnailImageScaling:1;
        unsigned int isSecondaryTitleDetached:1;
    } _has;
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
    SFColor *_backgroundColor;
    SFImage *_thumbnail;
    SFRichText *_title;
    SFFormattedText *_secondaryTitle;
    SFImage *_secondaryTitleImage;
    NSArray *_descriptions;
    SFRichText *_footnote;
    SFFormattedText *_trailingTopText;
    SFFormattedText *_trailingMiddleText;
    SFFormattedText *_trailingBottomText;
    SFActionItem *_action;
    SFButton *_button;
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
@property (retain, nonatomic) SFImage *thumbnail;
@property (nonatomic) _Bool preventThumbnailImageScaling;
@property (retain, nonatomic) SFRichText *title;
@property (retain, nonatomic) SFFormattedText *secondaryTitle;
@property (retain, nonatomic) SFImage *secondaryTitleImage;
@property (nonatomic) _Bool isSecondaryTitleDetached;
@property (copy, nonatomic) NSArray *descriptions;
@property (retain, nonatomic) SFRichText *footnote;
@property (retain, nonatomic) SFFormattedText *trailingTopText;
@property (retain, nonatomic) SFFormattedText *trailingMiddleText;
@property (retain, nonatomic) SFFormattedText *trailingBottomText;
@property (retain, nonatomic) SFActionItem *action;
@property (retain, nonatomic) SFButton *button;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasCanBeHidden;
- (_Bool)hasHasTopPadding;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasPreventThumbnailImageScaling;
- (_Bool)hasIsSecondaryTitleDetached;

@end
