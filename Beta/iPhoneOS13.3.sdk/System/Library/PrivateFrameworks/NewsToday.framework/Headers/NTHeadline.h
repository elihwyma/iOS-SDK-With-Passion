/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL, NTHeadlinePersonalizationMetadata, NTPBHeadlineAdElement, NTPBHeadlineAnalyticsElement, NTPBHeadlineBackingElement, SFSearchResult;

@interface NTHeadline : NSObject

{
    _Bool _needsSeenStateTracking;
    _Bool _displaysWithLeadingCellAppearance;
    _Bool _supportsSavingForLater;
    _Bool _boundToContext;
    _Bool _hiddenFromFeeds;
    _Bool _hiddenFromAutoFavorites;
    NSString *_title;
    NSString *_titleCompact;
    NSString *_shortExcerpt;
    NSDate *_ageDisplayDate;
    NSString *_sourceName;
    NSString *_compactSourceName;
    NSString *_sourceTagID;
    NSString *_language;
    NSURL *_sourceNameImageRemoteURL;
    double _sourceNameImageScale;
    NSURL *_compactSourceNameImageRemoteURL;
    NSURL *_thumbnailRemoteURL;
    NSString *_thumbnailIdentifier;
    unsigned long long _thumbnailSizePreset;
    NSURL *_webURL;
    NSURL *_NewsURL;
    NSString *_storyType;
    NSArray *_topicIDs;
    SFSearchResult *_searchResult;
    NSURL *_videoURL;
    double _videoDuration;
    NTPBHeadlineAnalyticsElement *_analyticsElement;
    NTPBHeadlineAdElement *_adElement;
    NTHeadlinePersonalizationMetadata *_personalizationMetadata;
    NTPBHeadlineBackingElement *_backingElement;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSURL *_flintDocumentURL;
    NSString *_identifier;
    struct CGRect _thumbnailFocalFrame;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleCompact;
@property (copy, nonatomic) NSString *shortExcerpt;
@property (copy, nonatomic) NSDate *ageDisplayDate;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *compactSourceName;
@property (copy, nonatomic) NSString *sourceTagID;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSURL *sourceNameImageRemoteURL;
@property (nonatomic) double sourceNameImageScale;
@property (copy, nonatomic) NSURL *compactSourceNameImageRemoteURL;
@property (copy, nonatomic) NSURL *thumbnailRemoteURL;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (nonatomic) unsigned long long thumbnailSizePreset;
@property (nonatomic) struct CGRect thumbnailFocalFrame;
@property (copy, nonatomic) NSURL *webURL;
@property (copy, nonatomic) NSURL *NewsURL;
@property (copy, nonatomic) NSString *storyType;
@property (copy, nonatomic) NSArray *topicIDs;
@property (copy, nonatomic) SFSearchResult *searchResult;
@property (copy, nonatomic) NSURL *videoURL;
@property (nonatomic) double videoDuration;
@property (nonatomic) _Bool needsSeenStateTracking;
@property (nonatomic) _Bool displaysWithLeadingCellAppearance;
@property (nonatomic) _Bool supportsSavingForLater;
@property (nonatomic, getter=isBoundToContext) _Bool boundToContext;
@property (nonatomic, getter=isHiddenFromFeeds) _Bool hiddenFromFeeds;
@property (nonatomic, getter=isHiddenFromAutoFavorites) _Bool hiddenFromAutoFavorites;
@property (copy, nonatomic) NTPBHeadlineAnalyticsElement *analyticsElement;
@property (copy, nonatomic) NTPBHeadlineAdElement *adElement;
@property (copy, nonatomic) NTHeadlinePersonalizationMetadata *personalizationMetadata;
@property (copy, nonatomic) NTPBHeadlineBackingElement *backingElement;
@property (copy, nonatomic) NSString *videoCallToActionTitle;
@property (copy, nonatomic) NSURL *videoCallToActionURL;
@property (copy, nonatomic) NSURL *flintDocumentURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long itemType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
