/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBImage, _SFPBRichText;

@protocol _SFPBRichTitleCardSection <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addOffers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearOffers;
- (unsigned short)offersCount;
- (unsigned short)offersAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addMoreGlyphs: /* Error: Ran out of types for this method. */;
- (unsigned short)clearMoreGlyphs;
- (unsigned short)moreGlyphsCount;
- (unsigned short)moreGlyphsAtIndex: /* Error: Ran out of types for this method. */;

@end
