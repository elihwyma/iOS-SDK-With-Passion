/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFColor, SFImage, SFRichText;

@protocol SFSocialMediaPostCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool nameNoWrap;
@property (copy, nonatomic) NSNumber *nameMaxLines;
@property (copy, nonatomic) NSString *handle;
@property (retain, nonatomic) SFImage *verifiedGlyph;
@property (retain, nonatomic) SFImage *profilePicture;
@property (retain, nonatomic) SFRichText *post;
@property (retain, nonatomic) SFImage *picture;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *footnote;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
