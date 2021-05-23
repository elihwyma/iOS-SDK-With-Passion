/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFRowCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
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

@end
