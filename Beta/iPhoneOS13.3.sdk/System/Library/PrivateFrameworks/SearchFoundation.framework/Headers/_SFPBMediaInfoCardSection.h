/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBActionItem, _SFPBColor, _SFPBMediaItem, _SFPBRichText;

@interface _SFPBMediaInfoCardSection : PBCodable <Swift>

{
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _isMediaContainer;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    _SFPBColor *_backgroundColor;
    _SFPBMediaItem *_mediaItem;
    NSArray *_details;
    _SFPBActionItem *_playAction;
    NSArray *_offers;
    NSString *_watchListIdentifier;
    NSString *_watchListButtonLabel;
    NSString *_watchListContinuationText;
    NSString *_watchListConfirmationText;
    _SFPBRichText *_specialOfferButtonLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (void)addDetails:(id)arg1;
- (void)addOffers:(id)arg1;
- (void)clearDetails;
- (unsigned long long)detailsCount;
- (id)detailsAtIndex:(unsigned long long)arg1;
- (void)clearOffers;
- (unsigned long long)offersCount;
- (id)offersAtIndex:(unsigned long long)arg1;

@end
