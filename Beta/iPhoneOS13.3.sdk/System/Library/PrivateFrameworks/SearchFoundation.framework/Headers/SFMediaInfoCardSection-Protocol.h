/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFColor, SFMediaItem, SFRichText;

@protocol SFMediaInfoCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) SFColor *backgroundColor;
@property (retain, nonatomic) SFMediaItem *mediaItem;
@property (copy, nonatomic) NSArray *details;
@property (retain, nonatomic) SFActionItem *playAction;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *watchListButtonLabel;
@property (copy, nonatomic) NSString *watchListContinuationText;
@property (copy, nonatomic) NSString *watchListConfirmationText;
@property (nonatomic) _Bool isMediaContainer;
@property (retain, nonatomic) SFRichText *specialOfferButtonLabel;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

@end
