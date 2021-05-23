/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFCard, SFColor, SFMediaItem, SFRichText, SFUserReportRequest;

@interface SFMediaInfoCardSection : SFCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int isMediaContainer:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isMediaContainer;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFMediaItem *_mediaItem;
    NSArray *_details;
    SFActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
    SFRichText *_specialOfferButtonLabel;
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
@property (retain, nonatomic) SFMediaItem *mediaItem;
@property (copy, nonatomic) NSArray *details;
@property (retain, nonatomic) SFActionItem *playAction;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *watchListButtonLabel;
@property (copy, nonatomic) NSString *watchListContinuationText;
@property (copy, nonatomic) NSString *watchListConfirmationText;
@property (nonatomic) _Bool isMediaContainer;
@property (retain, nonatomic) SFRichText *specialOfferButtonLabel;
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
- (_Bool)hasIsMediaContainer;

@end
