/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@protocol _SFPBRowCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) _Bool imageIsRightAligned;
@property (retain, nonatomic) _SFPBRichText *leadingText;
@property (retain, nonatomic) _SFPBRichText *trailingText;
@property (retain, nonatomic) _SFPBImage *attributionImage;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) _Bool keyNoWrap;
@property (nonatomic) int keyWeight;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) _Bool valueNoWrap;
@property (nonatomic) int valueWeight;
@property (nonatomic) _Bool cardPaddingBottom;
@property (retain, nonatomic) _SFPBRichText *leadingSubtitle;
@property (retain, nonatomic) _SFPBRichText *trailingSubtitle;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
