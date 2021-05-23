/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSURL.h>

@interface NSURL (SLTwitterURLAdditions)

+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)arg1;
+ (id)SLTwitterDirectMessageURL;
+ (_Bool)_isBetaSwitchEnabledForKey:(struct __CFString *)arg1;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (id)URLForFacebookPageAtPath:(id)arg1;

- (_Bool)isMusicStoreURL;
- (_Bool)isAppStoreURL;
- (_Bool)isAssetURL;
- (_Bool)loadingInUIWebViewWillLaunchAnotherApp;

@end
