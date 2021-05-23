/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFCard, SFColor, SFImage, SFRichText, SFUserReportRequest;

@interface SFRowCardSection : SFCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int imageIsRightAligned:1;
        unsigned int keyNoWrap:1;
        unsigned int valueNoWrap:1;
        unsigned int cardPaddingBottom:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _imageIsRightAligned;
    _Bool _keyNoWrap;
    _Bool _valueNoWrap;
    _Bool _cardPaddingBottom;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    SFImage *_image;
    SFRichText *_leadingText;
    SFRichText *_trailingText;
    SFImage *_attributionImage;
    NSString *_key;
    NSNumber *_keyWeight;
    NSString *_value;
    NSNumber *_valueWeight;
    SFRichText *_leadingSubtitle;
    SFRichText *_trailingSubtitle;
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
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) _Bool imageIsRightAligned;
@property (retain, nonatomic) SFRichText *leadingText;
@property (retain, nonatomic) SFRichText *trailingText;
@property (retain, nonatomic) SFImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) _Bool keyNoWrap;
@property (copy, nonatomic) NSNumber *keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) _Bool valueNoWrap;
@property (copy, nonatomic) NSNumber *valueWeight;
@property (nonatomic) _Bool cardPaddingBottom;
@property (retain, nonatomic) SFRichText *leadingSubtitle;
@property (retain, nonatomic) SFRichText *trailingSubtitle;
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
- (_Bool)hasImageIsRightAligned;
- (_Bool)hasKeyNoWrap;
- (_Bool)hasValueNoWrap;
- (_Bool)hasCardPaddingBottom;

@end
