/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBURL;

@protocol _SFPBDescriptionCardSection <Swift>

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
@property (retain, nonatomic) _SFPBText *descriptionText;
@property (copy, nonatomic) NSString *expandText;
@property (retain, nonatomic) _SFPBImage *image;
@property (nonatomic) _Bool titleNoWrap;
@property (nonatomic) int titleWeight;
@property (nonatomic) int descriptionSize;
@property (nonatomic) int descriptionWeight;
@property (nonatomic) _Bool descriptionExpand;
@property (nonatomic) int imageAlign;
@property (nonatomic) int textAlign;
@property (copy, nonatomic) NSString *attributionText;
@property (retain, nonatomic) _SFPBURL *attributionURL;
@property (retain, nonatomic) _SFPBImage *attributionGlyph;
@property (copy, nonatomic) NSArray *richDescriptions;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addRichDescriptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRichDescriptions;
- (unsigned short)richDescriptionsCount;
- (unsigned short)richDescriptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
