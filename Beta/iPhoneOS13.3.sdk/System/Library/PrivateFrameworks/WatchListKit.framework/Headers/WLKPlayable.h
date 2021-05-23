/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SSLookupItem, SSLookupItemOffer, WLKBasicContentMetadata, WLKChannelDetails, WLKComingSoonInfo, WLKLocale, WLKPlayEvent, WLKStoreOffer;

@interface WLKPlayable : NSObject

{
    _Bool _entitled;
    _Bool _entitledAnywhere;
    _Bool _appInstalled;
    _Bool _itunes;
    _Bool _subtitled;
    NSString *_playableID;
    NSString *_canonicalID;
    NSString *_channelID;
    WLKChannelDetails *_channelDetails;
    NSString *_contentID;
    long long _contentSourceType;
    long long _airingType;
    WLKBasicContentMetadata *_content;
    NSArray *_adLocales;
    NSArray *_audioTrackLocales;
    NSArray *_audioTrackFormats;
    NSArray *_closedCaptionLocales;
    NSArray *_SDHLocales;
    NSNumber *_duration;
    WLKLocale *_primaryLocale;
    NSString *_externalID;
    NSString *_externalServiceID;
    NSArray *_subtitledLocales;
    NSString *_videoQuality;
    NSString *_videoColorRange;
    NSDate *_endAirTime;
    NSDate *_startAirTime;
    WLKPlayEvent *_playEvent;
    NSURL *_tvAppDeeplinkURL;
    NSDictionary *_punchoutUrls;
    WLKComingSoonInfo *_comingSoonInfo;
    NSArray *_movieClips;
    NSArray *_storeOffers;
    NSArray *_subscriptionOffers;
    NSDictionary *_itsData;
    SSLookupItem *_lookupItem;
    NSArray *_offers;
    SSLookupItemOffer *_bestBuyOffer;
    SSLookupItemOffer *_bestRentalOffer;
}

@property (copy, nonatomic, readonly) NSString *playableID;
@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) WLKChannelDetails *channelDetails;
@property (copy, nonatomic, readonly) NSString *contentID;
@property (nonatomic, readonly) long long contentSourceType;
@property (nonatomic, readonly, getter=isEntitled) _Bool entitled;
@property (nonatomic, readonly, getter=isEntitledAnywhere) _Bool entitledAnywhere;
@property (nonatomic, readonly, getter=isAppInstalled) _Bool appInstalled;
@property (nonatomic, readonly, getter=isiTunes) _Bool itunes;
@property (nonatomic, readonly) long long airingType;
@property (nonatomic, readonly) WLKBasicContentMetadata *content;
@property (copy, nonatomic, readonly) NSArray *adLocales;
@property (copy, nonatomic, readonly) NSArray *audioTrackLocales;
@property (copy, nonatomic, readonly) NSArray *audioTrackFormats;
@property (copy, nonatomic, readonly) NSArray *closedCaptionLocales;
@property (copy, nonatomic, readonly) NSArray *SDHLocales;
@property (nonatomic, readonly) NSNumber *duration;
@property (copy, nonatomic, readonly) WLKLocale *primaryLocale;
@property (copy, nonatomic, readonly) NSString *externalID;
@property (copy, nonatomic, readonly) NSString *externalServiceID;
@property (nonatomic, readonly, getter=isSubtitled) _Bool subtitled;
@property (copy, nonatomic, readonly) NSArray *subtitledLocales;
@property (copy, nonatomic, readonly) NSString *videoQuality;
@property (copy, nonatomic, readonly) NSString *videoColorRange;
@property (copy, nonatomic, readonly) NSDate *endAirTime;
@property (copy, nonatomic, readonly) NSDate *startAirTime;
@property (nonatomic, readonly) WLKPlayEvent *playEvent;
@property (copy, nonatomic, readonly) NSURL *tvAppDeeplinkURL;
@property (copy, nonatomic, readonly) NSDictionary *punchoutUrls;
@property (copy, nonatomic, readonly) WLKComingSoonInfo *comingSoonInfo;
@property (copy, nonatomic, readonly) NSArray *movieClips;
@property (copy, nonatomic, readonly) NSArray *storeOffers;
@property (copy, nonatomic, readonly) NSArray *subscriptionOffers;
@property (copy, nonatomic, readonly) WLKStoreOffer *bestStoreRentalOffer;
@property (copy, nonatomic, readonly) WLKStoreOffer *bestStoreBuyOffer;
@property (copy, nonatomic, readonly) WLKStoreOffer *bestStoreSubscriptionOffer;
@property (copy, nonatomic, readonly) NSDictionary *itsData;
@property (copy, nonatomic, readonly) SSLookupItem *lookupItem;
@property (copy, nonatomic, readonly) NSArray *offers;
@property (copy, nonatomic, readonly) SSLookupItemOffer *bestBuyOffer;
@property (copy, nonatomic, readonly) SSLookupItemOffer *bestRentalOffer;

+ (id)playablesWithDictionaries:(id)arg1 context:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2;
- (id)_filteredStoreContentSource:(id)arg1;
- (_Bool)_supportsHD;
- (id)playPunchoutURL;
- (id)openPunchoutURL;

@end
