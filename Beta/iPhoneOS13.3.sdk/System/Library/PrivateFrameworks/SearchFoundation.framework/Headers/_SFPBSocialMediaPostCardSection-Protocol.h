/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBRichText;

@protocol _SFPBSocialMediaPostCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool nameNoWrap;
@property (nonatomic) int nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) _SFPBImage *verifiedGlyph;
@property (retain, nonatomic) _SFPBImage *profilePicture;
@property (retain, nonatomic) _SFPBRichText *post;
@property (retain, nonatomic) _SFPBImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
