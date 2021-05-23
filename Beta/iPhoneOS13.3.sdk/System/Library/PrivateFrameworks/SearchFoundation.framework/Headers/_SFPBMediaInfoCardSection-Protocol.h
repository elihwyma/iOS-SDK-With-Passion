/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaItem, _SFPBRichText;

@protocol _SFPBMediaInfoCardSection <Swift>

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) _Bool canBeHidden;
@property (nonatomic) _Bool hasTopPadding;
@property (nonatomic) _Bool hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (retain, nonatomic) _SFPBMediaItem *mediaItem;
@property (copy, nonatomic) NSArray *details;
@property (retain, nonatomic) _SFPBActionItem *playAction;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *watchListButtonLabel;
@property (copy, nonatomic) NSString *watchListContinuationText;
@property (copy, nonatomic) NSString *watchListConfirmationText;
@property (nonatomic) _Bool isMediaContainer;
@property (retain, nonatomic) _SFPBRichText *specialOfferButtonLabel;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPunchoutOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPunchoutOptions;
- (unsigned short)punchoutOptionsCount;
- (unsigned short)punchoutOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)addOffers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDetails;
- (unsigned short)detailsCount;
- (unsigned short)detailsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearOffers;
- (unsigned short)offersCount;
- (unsigned short)offersAtIndex: /* Error: Ran out of types for this method. */;

@end
