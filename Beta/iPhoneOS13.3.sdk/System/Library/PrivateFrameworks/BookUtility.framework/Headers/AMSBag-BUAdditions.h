/*
 Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
 */

#import <AppleMediaServices/AMSBag.h>

@class AMSBagValue;

@interface AMSBag (BUAdditions)

@property (nonatomic, readonly) AMSBagValue *bu_addFundsURL;
@property (nonatomic, readonly) AMSBagValue *bu_appAnalyticsURL;
@property (nonatomic, readonly) AMSBagValue *bu_booksISBNURL;
@property (nonatomic, readonly) AMSBagValue *bu_booksMediaAPIHost;
@property (nonatomic, readonly) AMSBagValue *bu_booksMediaAPIPreviewHost;
@property (nonatomic, readonly) AMSBagValue *bu_booksTabs;
@property (nonatomic, readonly) AMSBagValue *bu_countryCode;
@property (nonatomic, readonly) AMSBagValue *bu_currencyCode;
@property (nonatomic, readonly) AMSBagValue *bu_dtPurchasesPages;
@property (nonatomic, readonly) AMSBagValue *bu_forgottenPassword;
@property (nonatomic, readonly) AMSBagValue *bu_isBooksStoreEnabled;
@property (nonatomic, readonly) AMSBagValue *bu_isAudiobooksStoreEnabled;
@property (nonatomic, readonly) AMSBagValue *bu_ixStoreSheet;
@property (nonatomic, readonly) AMSBagValue *bu_ixStoreSheetBooks;
@property (nonatomic, readonly) AMSBagValue *bu_jsAppURL;
@property (nonatomic, readonly) AMSBagValue *bu_language;
@property (nonatomic, readonly) AMSBagValue *bu_languageTag;
@property (nonatomic, readonly) AMSBagValue *bu_libraryLink;
@property (nonatomic, readonly) AMSBagValue *bu_mediaAPITokenProviderURL;
@property (nonatomic, readonly) AMSBagValue *bu_metrics;
@property (nonatomic, readonly) AMSBagValue *bu_p2LaunchEbookstoreHostPatterns;
@property (nonatomic, readonly) AMSBagValue *bu_p2LaunchEbookstorePathPatterns;
@property (nonatomic, readonly) AMSBagValue *bu_p2LaunchAudioBookStorePathPatterns;
@property (nonatomic, readonly) AMSBagValue *bu_p2ServiceTermsURL;
@property (nonatomic, readonly) AMSBagValue *bu_privacyAcknowledgementURL;
@property (nonatomic, readonly) AMSBagValue *bu_processRedirectURL;
@property (nonatomic, readonly) AMSBagValue *bu_purchaseDAAP;
@property (nonatomic, readonly) AMSBagValue *bu_readingGoalShareURL;
@property (nonatomic, readonly) AMSBagValue *bu_resetAndRedirectURL;
@property (nonatomic, readonly) AMSBagValue *bu_saveUserReviewURL;
@property (nonatomic, readonly) AMSBagValue *bu_searchHints;
@property (nonatomic, readonly) AMSBagValue *bu_signSAPRequest;
@property (nonatomic, readonly) AMSBagValue *bu_signSAPSetup;
@property (nonatomic, readonly) AMSBagValue *bu_signSAPSetupCert;
@property (nonatomic, readonly) AMSBagValue *bu_storeFront;
@property (nonatomic, readonly) AMSBagValue *bu_trendingSearches;
@property (nonatomic, readonly) AMSBagValue *bu_trustedDomains;
@property (nonatomic, readonly) AMSBagValue *bu_userRateContentURL;
@property (nonatomic, readonly) AMSBagValue *bu_userReviewSortOptions;
@property (nonatomic, readonly) AMSBagValue *bu_writeUserReviewURL;

+ (id)bu_defaultBagKeysDictionary;
+ (id)_keySetWithDictionary:(id)arg1;
+ (id)bu_defaultBag;
+ (id)_defaultValueDictionary;
+ (void)bu_registerKeySetToDefaultBag:(id)arg1;
+ (void)bu_audiobookStoreIsAvailable:(CDUnknownBlockType)arg1;

@end
