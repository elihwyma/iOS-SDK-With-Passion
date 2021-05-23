/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFImage, SFRichText;

@protocol SFAudioPlaybackCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (nonatomic) int state;
@property (copy, nonatomic) NSArray *playCommands;
@property (copy, nonatomic) NSArray *stopCommands;
@property (retain, nonatomic) SFRichText *detailText;
@property (retain, nonatomic) SFRichText *title;
@property (retain, nonatomic) SFRichText *subtitle;
@property (retain, nonatomic) SFImage *thumbnail;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
