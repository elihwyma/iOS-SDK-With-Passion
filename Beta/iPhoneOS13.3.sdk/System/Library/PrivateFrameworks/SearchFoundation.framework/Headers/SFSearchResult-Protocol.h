/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFActionItem, SFCard, SFCustom, SFImage, SFMoreResults, SFPunchout, SFText;

@protocol SFSearchResult

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SFImage *thumbnail;
@property (nonatomic) _Bool preventThumbnailImageScaling;
@property (retain, nonatomic) SFText *title;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (retain, nonatomic) SFImage *secondaryTitleImage;
@property (nonatomic) _Bool isSecondaryTitleDetached;
@property (nonatomic) _Bool isCentered;
@property (copy, nonatomic) NSArray *descriptions;
@property (copy, nonatomic) NSString *footnote;
@property (copy, nonatomic) NSString *publishDate;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *completion;
@property (retain, nonatomic) SFImage *completionImage;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *auxiliaryTopText;
@property (copy, nonatomic) NSString *auxiliaryMiddleText;
@property (copy, nonatomic) NSString *auxiliaryBottomText;
@property (nonatomic) int auxiliaryBottomTextColor;
@property (retain, nonatomic) SFActionItem *action;
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *calendarIdentifier;
@property (retain, nonatomic) NSData *mapsData;
@property (copy, nonatomic) NSString *mapsResultType;
@property (retain, nonatomic) NSURL *mapsMoreURL;
@property (copy, nonatomic) NSString *mapsMoreString;
@property (retain, nonatomic) SFImage *mapsMoreIcon;
@property (copy, nonatomic) NSString *nearbyBusinessesString;
@property (copy, nonatomic) NSString *appleReferrer;
@property (retain, nonatomic) SFCard *card;
@property (retain, nonatomic) SFCard *inlineCard;
@property (retain, nonatomic) SFMoreResults *moreResults;
@property (retain, nonatomic) SFPunchout *moreResultsPunchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *sectionBundleIdentifier;
@property (nonatomic) _Bool isLocalApplicationResult;
@property (copy, nonatomic) NSString *userActivityRequiredString;
@property (nonatomic) int topHit;
@property (copy, nonatomic) NSString *sectionHeader;
@property (copy, nonatomic) NSString *sectionHeaderMore;
@property (copy, nonatomic) NSURL *sectionHeaderMoreURL;
@property (nonatomic) _Bool renderHorizontallyWithOtherResultsInCategory;
@property (nonatomic) double rankingScore;
@property (nonatomic) int placement;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic) double serverScore;
@property (copy, nonatomic) NSDictionary *topicDistribution;
@property (copy, nonatomic) NSDictionary *featureScaling;
@property (nonatomic) double personalizationScore;
@property (nonatomic) unsigned long long origRank;
@property (retain, nonatomic) SFCustom *customProperties;
@property (copy, nonatomic) NSString *resultType;
@property (copy, nonatomic) NSString *resultTemplate;
@property (nonatomic) _Bool isQuickGlance;
@property (nonatomic) _Bool isStreaming;
@property (retain, nonatomic) NSNumber *engagementScore;
@property (retain, nonatomic) NSNumber *queryIndependentScore;
@property (retain, nonatomic) NSNumber *maxAge;
@property (copy, nonatomic) NSString *titleNote;
@property (retain, nonatomic) NSNumber *titleNoteSize;
@property (copy, nonatomic) NSString *resultBundleId;
@property (retain, nonatomic) SFImage *icon;
@property (nonatomic) _Bool isStaticCorrection;
@property (copy, nonatomic) NSDictionary *localFeatures;
@property (copy, nonatomic) NSString *intendedQuery;
@property (copy, nonatomic) NSString *correctedQuery;
@property (copy, nonatomic) NSString *completedQuery;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) _Bool publiclyIndexable;
@property (copy, nonatomic) NSString *userInput;
@property (copy, nonatomic) NSArray *itemProviderDataTypes;
@property (copy, nonatomic) NSArray *itemProviderFileTypes;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSArray *contentTypeTree;
@property (nonatomic) long long dataOwnerType;
@property (copy, nonatomic) NSString *fileProviderIdentifier;
@property (copy, nonatomic) NSString *fileProviderDomainIdentifier;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *srf;
@property (nonatomic) _Bool doNotFold;
@property (nonatomic) unsigned long long blockId;
@property (retain, nonatomic) NSData *entityData;

@end
