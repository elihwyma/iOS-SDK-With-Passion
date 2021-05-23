/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SSURLConnectionRequest;

@interface SSItem : NSObject

{
    NSDate *_expirationDate;
    NSArray *_offers;
    NSDictionary *_properties;
    NSString *_tellAFriendBody;
    NSString *_tellAFriendBodyMIMEType;
    NSMutableArray *_tellAFriendHandlers;
    SSURLConnectionRequest *_tellAFriendRequest;
    NSString *_tellAFriendSubject;
}

@property (nonatomic, readonly) NSNumber *ITunesStoreIdentifier;
@property (nonatomic, readonly) NSArray *allItemOffers;
@property (nonatomic, readonly) SSItemOffer *defaultItemOffer;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *itemTitle;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly, getter=isHighDefinition) _Bool highDefinition;
@property (nonatomic, readonly, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property (nonatomic, readonly) NSURL *viewItemURL;
@property (nonatomic, readonly) float averageUserRating;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) SSItemImageCollection *imageCollection;
@property (nonatomic, readonly) NSArray *thumbnailImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)bundleIdentifier;
- (void)_setExpirationDate:(id)arg1;
- (id)bundleVersion;
- (id)shortDescription;
- (id)valueForProperty:(id)arg1;
- (id)longDescription;
- (id)networkName;
- (id)mediaKind;
- (id)_offers;
- (id)releaseDate;
- (id)collectionName;
- (id)composerName;
- (_Bool)isCompilation;
- (id)seasonNumber;
- (id)buyParameters;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)collectionIdentifier;
- (id)seriesName;
- (id)genreName;
- (id)contentRating;
- (id)podcastFeedURL;
- (id)preOrderIdentifier;
- (id)artistIdentifier;
- (id)collectionArtistName;
- (id)collectionIndexInCollectionGroup;
- (id)episodeIdentifier;
- (id)episodeSortIdentifier;
- (id)genreIdentifier;
- (id)indexInCollection;
- (id)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (id)podcastEpisodeGUID;
- (id)videoDetails;
- (id)softwareType;
- (id)playableMedia;
- (id)releaseDateString;
- (id)initWithItemDictionary:(id)arg1;
- (id)rawItemDictionary;
- (id)itemOfferForIdentifier:(id)arg1;
- (void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)tellAFriendBody;
- (id)_tellAFriendDictionary;
- (id)priceDisplay;
- (void)_finishTellAFriendLoadWithError:(id)arg1;
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)numberOfPrintedPages;
- (id)relatedItemsForRelationType:(id)arg1;
- (id)tellAFriendBodyMIMEType;
- (id)tellAFriendBodyURL;
- (id)tellAFriendSubject;
- (id)tweetInitialText;
- (id)tweetURL;
- (id)sendGiftURL;
- (id)viewReviewsURL;

@end
