/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBButton, _SFPBColor, _SFPBFormattedText, _SFPBImage, _SFPBRichText;

@protocol _SFPBDetailedRowCardSection <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addDescriptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDescriptions;
- (unsigned short)descriptionsCount;
- (unsigned short)descriptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
