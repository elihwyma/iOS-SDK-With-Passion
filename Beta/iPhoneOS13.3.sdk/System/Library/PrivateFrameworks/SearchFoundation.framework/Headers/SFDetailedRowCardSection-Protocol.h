/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFButton, SFColor, SFFormattedText, SFImage, SFRichText;

@protocol SFDetailedRowCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
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

@end
