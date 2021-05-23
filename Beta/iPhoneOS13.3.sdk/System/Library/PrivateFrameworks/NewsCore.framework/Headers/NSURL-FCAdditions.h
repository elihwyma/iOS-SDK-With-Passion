/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSURL.h>

@interface NSURL (FCAdditions)

+ (id)fc_safeURLWithString:(id)arg1;
+ (id)fc_fileURLForWidgetReferralItemWithName:(id)arg1;
+ (id)fc_URLWithResourceID:(id)arg1;

- (_Bool)fc_isNewsURL;
- (_Bool)_isFeldsparOldArticleURL;
- (_Bool)_isFeldsparOldChannelURL;
- (_Bool)_isFeldsparOldTopicURL;
- (_Bool)fc_isNewsArticleURL;
- (_Bool)fc_isNewsIssueURL;
- (_Bool)fc_isHardPaywallNewsArticleURL:(out id *)arg1;
- (id)fc_NewsArticleID;
- (id)fc_NewsIssueID;
- (_Bool)fc_isFeldsparInterstitialPreviewURL;
- (_Bool)fc_isNewsTagURL;
- (id)fc_feldsparTagID;
- (_Bool)fc_isEqualToURL:(id)arg1;
- (id)fc_URLByDeletingQuery;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (_Bool)fc_isResourceURL;
- (id)fc_resourceID;

@end
