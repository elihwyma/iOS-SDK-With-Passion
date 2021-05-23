/*
 Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

#import <Foundation/NSURL.h>

@interface NSURL (NSSAdditions)

+ (id)nss_NewsURLForArticleID:(id)arg1;
+ (id)nss_NewsURLForTagID:(id)arg1;
+ (id)nss_MarketingPageURL;
+ (id)nss_NewsURLWithPathComponents:(id)arg1 internal:(_Bool)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 internal:(_Bool)arg2 targetIsVideo:(_Bool)arg3 hardPaywall:(_Bool)arg4;
+ (id)nss_NewsURLForWidgetVideoPlaylist;
+ (id)nss_NewsURLForWebLinkURL:(id)arg1;
+ (id)nss_NewsURLForIssueID:(id)arg1;
+ (id)nss_NewsURLForArticleID:(id)arg1 targetIsVideo:(_Bool)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 title:(id)arg2;
+ (id)nss_NewsURLForForYou;
+ (id)nss_NewsURLForMagazines;
+ (id)nss_NewsURLForMyMagazines;
+ (id)nss_NewsURLForSaved;
+ (id)nss_NewsURLForHistory;
+ (id)nss_NewsURLForFavoritesPicker;
+ (id)nss_NewsURLForManageNotifications;

- (_Bool)nss_isNewsArticleURL;
- (_Bool)nss_isNewsURL;
- (id)_nss_valueForQueryParameterWithKey:(id)arg1;
- (_Bool)nss_isNewsTagURL;
- (id)_nss_URLByAppendingQueryItem:(id)arg1;
- (_Bool)nss_isNewsWidgetVideoPlaylist;
- (_Bool)nss_isNewsArticleVideoURL;
- (_Bool)nss_hasRefreshParameter;
- (_Bool)nss_isFollowNewsTagURL;
- (id)nss_URLWithCampaignID:(id)arg1;
- (id)nss_URLWithVideoTarget:(_Bool)arg1;
- (id)nss_campaignID;

@end
