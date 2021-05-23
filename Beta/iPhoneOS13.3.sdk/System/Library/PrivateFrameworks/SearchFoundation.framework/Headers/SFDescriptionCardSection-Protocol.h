/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFColor, SFImage, SFText;

@protocol SFDescriptionCardSection <Swift>

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
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
