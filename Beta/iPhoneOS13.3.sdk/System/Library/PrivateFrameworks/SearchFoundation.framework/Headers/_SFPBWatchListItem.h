/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString;

@interface _SFPBWatchListItem : PBCodable <Swift>

{
    NSString *_watchListIdentifier;
    NSString *_seasonEpisodeTextFormat;
    NSString *_continueInTextFormat;
    NSString *_openButtonTitle;
    NSString *_installButtonTitle;
    NSString *_purchaseOfferTextFormat;
    NSString *_inUpNextText;
    NSString *_addToUpNextText;
    NSString *_addedToUpNextText;
    NSString *_watchLiveTextFormat;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *watchListIdentifier;
@property (copy, nonatomic) NSString *seasonEpisodeTextFormat;
@property (copy, nonatomic) NSString *continueInTextFormat;
@property (copy, nonatomic) NSString *openButtonTitle;
@property (copy, nonatomic) NSString *installButtonTitle;
@property (copy, nonatomic) NSString *purchaseOfferTextFormat;
@property (copy, nonatomic) NSString *inUpNextText;
@property (copy, nonatomic) NSString *addToUpNextText;
@property (copy, nonatomic) NSString *addedToUpNextText;
@property (copy, nonatomic) NSString *watchLiveTextFormat;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
