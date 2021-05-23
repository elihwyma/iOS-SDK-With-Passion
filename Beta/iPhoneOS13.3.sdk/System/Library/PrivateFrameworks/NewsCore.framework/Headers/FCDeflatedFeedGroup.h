/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCColorGradient, FCFeedEdition, FCSharedStringIndex, NSArray, NSDate, NSString, NTPBDiscoverMoreVideosInfo, NTPBFeedViewportGroup;

@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;

@interface FCDeflatedFeedGroup : NSObject <Swift>

{
    NSArray *_headlines;
    NSArray *_videoPlaylistHeadlines;
    NTPBFeedViewportGroup *_pbGroup;
    FCSharedStringIndex *_sharedStrings;
}

@property (nonatomic, readonly) NTPBFeedViewportGroup *pbGroup;
@property (nonatomic, readonly) FCSharedStringIndex *sharedStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long feedElementType;
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

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isGap;
- (id)initWithPBGroup:(id)arg1 sharedStrings:(id)arg2;

@end
