/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, WLKArtworkVariantListing;

@interface WLKChannelDetails : NSObject

{
    _Bool _subscribed;
    _Bool _itunes;
    _Bool _firstParty;
    _Bool _watchListEnabled;
    _Bool _consented;
    _Bool _apSubscription;
    _Bool _shouldTrackPlayActivity;
    _Bool _appInstalled;
    _Bool _requiresAccountLevelConsent;
    _Bool _requiresSubscriptionForConsent;
    _Bool _shouldPromptForConsentOnSubscriptionChange;
    _Bool _shouldIncludeInConsent;
    NSString *_channelID;
    NSString *_name;
    NSArray *_appAdamIDs;
    NSArray *_appBundleIDs;
    NSString *_appName;
    WLKArtworkVariantListing *_images;
    NSDictionary *_rateLimit;
    unsigned long long _channelType;
    NSString *_minRequiredAppVersion;
    NSString *_appStoreURLString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *appBundleIDs;
@property (copy, nonatomic, readonly) NSArray *appAdamIDs;
@property (copy, nonatomic, readonly) NSURL *appStoreURL;
@property (copy, nonatomic) NSString *appStoreURLString;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *appAdamIDs;
@property (copy, nonatomic, readonly) NSArray *appBundleIDs;
@property (copy, nonatomic, readonly) NSString *appName;
@property (copy, nonatomic, readonly) NSURL *appStoreURL;
@property (nonatomic, readonly) WLKArtworkVariantListing *images;
@property (nonatomic, readonly, getter=isSubscribed) _Bool subscribed;
@property (nonatomic, readonly, getter=isiTunes) _Bool itunes;
@property (nonatomic, readonly, getter=isFirstParty) _Bool firstParty;
@property (nonatomic, readonly, getter=isWatchListEnabled) _Bool watchListEnabled;
@property (nonatomic, readonly, getter=isConsented) _Bool consented;
@property (nonatomic, readonly, getter=isApSubscription) _Bool apSubscription;
@property (nonatomic, readonly) NSDictionary *rateLimit;
@property (nonatomic, readonly) _Bool shouldTrackPlayActivity;
@property (nonatomic, readonly) unsigned long long channelType;
@property (nonatomic, readonly) NSString *minRequiredAppVersion;
@property (nonatomic, readonly, getter=isAppInstalled) _Bool appInstalled;
@property (nonatomic, readonly) _Bool requiresAccountLevelConsent;
@property (nonatomic, readonly) _Bool requiresSubscriptionForConsent;
@property (nonatomic, readonly) _Bool shouldPromptForConsentOnSubscriptionChange;
@property (nonatomic, readonly) _Bool shouldIncludeInConsent;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)sui_channelName;
- (id)appIconURLForSize:(struct CGSize)arg1;

@end
