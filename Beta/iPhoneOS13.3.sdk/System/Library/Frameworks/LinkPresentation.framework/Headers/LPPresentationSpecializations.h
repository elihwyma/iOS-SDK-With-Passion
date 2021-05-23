/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@interface LPPresentationSpecializations : NSObject

+ (id)userAgentForURL:(id)arg1;
+ (_Bool)isYouTubeEmbedURL:(id)arg1;
+ (_Bool)isiCloudURL:(id)arg1;
+ (_Bool)isRedditPostURL:(id)arg1;
+ (id)redditJSONURLForRedditPostURL:(id)arg1;
+ (_Bool)isAppleNewsURL:(id)arg1;
+ (id)youTubeVideoComponentsForEmbedURL:(id)arg1;
+ (_Bool)isiTunesStoreOrAdjacentURL:(id)arg1;
+ (_Bool)isAppleTVURL:(id)arg1;
+ (id)canonicalMetadataURLForURL:(id)arg1;
+ (_Bool)shouldLoadInsteadOfUsingExistingWebViewForURL:(id)arg1;
+ (_Bool)isTwitterProfileImageURL:(id)arg1;
+ (_Bool)isRedditStaticImage:(id)arg1;
+ (_Bool)isKnownBlankImageURL:(id)arg1;
+ (id)articleTitleFromTitle:(id)arg1 withURL:(id)arg2;
+ (_Bool)isAppStoreStoryURL:(id)arg1;
+ (_Bool)isMuninURL:(id)arg1;
+ (_Bool)isAppleMapsURL:(id)arg1;
+ (_Bool)isAppleMapsCollectionURL:(id)arg1;
+ (_Bool)isGoogleSearchURL:(id)arg1;
+ (_Bool)isGoogleURL:(id)arg1;
+ (id)searchQueryForURL:(id)arg1;
+ (id)youTubeVideoComponentsForVideoURL:(id)arg1;
+ (_Bool)isMicroblogPost:(id)arg1;
+ (_Bool)shouldPreferMiniStyleForURL:(id)arg1;
+ (_Bool)isSinaWeiboURL:(id)arg1;
+ (_Bool)isTweetURL:(id)arg1;
+ (id)nonMobileTweetURLForTweetURL:(id)arg1;
+ (id)nonMobileRedditURLForRedditURL:(id)arg1;
+ (id)nonDirectURLForImgurURL:(id)arg1;
+ (id)nonMobileYouTubeURLForURL:(id)arg1;
+ (id)youTubeVideoURLForEmbedURL:(id)arg1;
+ (id)destinationForGoogleRedirectURL:(id)arg1;
+ (_Bool)isYouTubeURL:(id)arg1;
+ (_Bool)isGitHubURL:(id)arg1;
+ (_Bool)isTwitterShortenerURL:(id)arg1;
+ (_Bool)isYouTubeVideoURL:(id)arg1;

@end
