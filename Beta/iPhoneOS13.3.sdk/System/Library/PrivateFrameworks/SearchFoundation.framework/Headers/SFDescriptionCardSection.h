/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFTitleCardSection.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFCard, SFColor, SFImage, SFText, SFUserReportRequest;

@interface SFDescriptionCardSection : SFTitleCardSection <Swift>

{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int titleNoWrap:1;
        unsigned int descriptionExpand:1;
        unsigned int imageAlign:1;
        unsigned int textAlign:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _titleNoWrap;
    _Bool _descriptionExpand;
    int _separatorStyle;
    int _imageAlign;
    int _textAlign;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_title;
    NSString *_subtitle;
    SFText *_descriptionText;
    NSString *_expandText;
    SFImage *_image;
    NSNumber *_titleWeight;
    NSNumber *_descriptionSize;
    NSNumber *_descriptionWeight;
    NSString *_attributionText;
    NSURL *_attributionURL;
    SFImage *_attributionGlyph;
    NSArray *_richDescriptions;
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
@property (retain, nonatomic) SFText *descriptionText;
@property (copy, nonatomic) NSString *expandText;
@property (retain, nonatomic) SFImage *image;
@property (nonatomic) _Bool titleNoWrap;
@property (copy, nonatomic) NSNumber *titleWeight;
@property (copy, nonatomic) NSNumber *descriptionSize;
@property (copy, nonatomic) NSNumber *descriptionWeight;
@property (nonatomic) _Bool descriptionExpand;
@property (nonatomic) int imageAlign;
@property (nonatomic) int textAlign;
@property (copy, nonatomic) NSString *attributionText;
@property (copy, nonatomic) NSURL *attributionURL;
@property (retain, nonatomic) SFImage *attributionGlyph;
@property (copy, nonatomic) NSArray *richDescriptions;

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
- (_Bool)hasDescriptionExpand;
- (_Bool)hasImageAlign;
- (_Bool)hasTextAlign;

@end
