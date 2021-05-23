/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFColor, SFImage, SFRichText;

@protocol SFRichTitleCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *titleImage;
@property (nonatomic) _Bool isCentered;
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
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
