/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCColorGradient, FCFeedEdition, NSArray, NSDate, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;

@protocol FCFeedGroupOutlining <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) long long groupType;
@property (copy, nonatomic, readonly) NSString *eyebrowText;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (copy, nonatomic, readonly) NSString *ctaText;
@property (copy, nonatomic, readonly) FCColor *titleColor;
@property (copy, nonatomic, readonly) FCColor *darkStyleTitleColor;
@property (copy, nonatomic, readonly) FCColorGradient *backgroundGradient;
@property (copy, nonatomic, readonly) FCColorGradient *darkStyleBackgroundGradient;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> cardStyle;
@property (copy, nonatomic, readonly) id <FCCardStyleProviding> darkCardStyle;
@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSArray *videoPlaylistHeadlines;
@property (nonatomic, readonly) NSDate *creationDate;
@property (copy, nonatomic, readonly) FCFeedEdition *edition;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (copy, nonatomic, readonly) NSArray *headlines;
@property (copy, nonatomic, readonly) NSString *backingTagID;
@property (copy, nonatomic, readonly) NSArray *issueIDs;
@property (nonatomic, readonly) id <FCForYouBridgedFeedGroup> bridgedGroup;
@property (nonatomic, readonly) _Bool usesPlaceholderHeadlines;

@end
