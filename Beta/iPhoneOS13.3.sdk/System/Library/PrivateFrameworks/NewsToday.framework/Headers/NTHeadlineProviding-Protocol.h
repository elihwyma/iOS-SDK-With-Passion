/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsToday/Swift-Protocol.h>

@class NSArray, NSDate, NSObject, NSString, NSURL, SFSearchResult;

@protocol NTHeadlineAdElement, NTHeadlineAnalyticsElementProviding, NTHeadlineBackingElement, NTHeadlinePersonalizationMetadata;

@protocol NTHeadlineProviding <Swift>

@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *titleCompact;
@property (copy, nonatomic, readonly) NSString *shortExcerpt;
@property (copy, nonatomic, readonly) NSDate *ageDisplayDate;
@property (copy, nonatomic, readonly) NSString *sourceName;
@property (copy, nonatomic, readonly) NSString *compactSourceName;
@property (copy, nonatomic, readonly) NSString *sourceTagID;
@property (copy, nonatomic, readonly) NSString *language;
@property (copy, nonatomic, readonly) NSURL *sourceNameImageRemoteURL;
@property (nonatomic, readonly) double sourceNameImageScale;
@property (copy, nonatomic, readonly) NSURL *compactSourceNameImageRemoteURL;
@property (copy, nonatomic, readonly) NSURL *thumbnailRemoteURL;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (nonatomic, readonly) unsigned long long thumbnailSizePreset;
@property (nonatomic, readonly) struct CGRect thumbnailFocalFrame;
@property (copy, nonatomic, readonly) NSURL *webURL;
@property (copy, nonatomic, readonly) NSURL *NewsURL;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *storyType;
@property (copy, nonatomic, readonly) NSArray *topicIDs;
@property (copy, nonatomic, readonly) SFSearchResult *searchResult;
@property (copy, nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) double videoDuration;
@property (nonatomic, readonly) _Bool displaysWithLeadingCellAppearance;
@property (nonatomic, readonly) _Bool supportsSavingForLater;
@property (nonatomic, readonly, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property (nonatomic, readonly, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property (nonatomic, readonly, getter=isBoundToContext) _Bool boundToContext;
@property (copy, nonatomic, readonly) NSObject<NTHeadlineAnalyticsElementProviding> *analyticsElement;
@property (copy, nonatomic, readonly) NSObject<NTHeadlineAdElement> *adElement;
@property (copy, nonatomic, readonly) NSObject<NTHeadlinePersonalizationMetadata> *personalizationMetadata;
@property (copy, nonatomic, readonly) NSObject<NTHeadlineBackingElement> *backingElement;
@property (copy, nonatomic, readonly) NSURL *flintDocumentURL;
@property (copy, nonatomic, readonly) NSString *videoCallToActionTitle;
@property (copy, nonatomic, readonly) NSURL *videoCallToActionURL;

@end
