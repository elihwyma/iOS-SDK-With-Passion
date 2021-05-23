/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCColorGradient, FCFeedDescriptor, FCFeedEdition, NSArray, NSDate, NSString, NTPBDiscoverMoreVideosInfo;

@protocol FCCardStyleProviding, FCForYouBridgedFeedGroup;

@interface FCFeedGroup : NSObject <Swift>

{
    _Bool _isFirstFromEdition;
    NSString *_identifier;
    NSString *_sourceIdentifier;
    FCColor *_titleColor;
    FCColorGradient *_backgroundGradient;
    FCColorGradient *_darkStyleBackgroundGradient;
    id <FCCardStyleProviding> _cardStyle;
    id <FCCardStyleProviding> _darkCardStyle;
    NSDate *_creationDate;
    NSArray *_issueIDs;
    NSString *_backingTagID;
    id <FCForYouBridgedFeedGroup> _bridgedGroup;
    unsigned long long _options;
    unsigned long long _mergeID;
    long long _groupType;
    NSArray *_elements;
    NSArray *_headlines;
    NSString *_eyebrowText;
    NSString *_title;
    NSString *_subtitle;
    NSString *_ctaText;
    FCColor *_darkStyleTitleColor;
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    NSArray *_videoPlaylistHeadlines;
    FCFeedDescriptor *_L2FeedDescriptor;
    FCFeedEdition *_edition;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long groupType;
@property (copy, nonatomic, readonly) NSArray *elements;
@property (copy, nonatomic, readonly) NSArray *headlines;
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
@property (copy, nonatomic, readonly) FCFeedDescriptor *L2FeedDescriptor;
@property (copy, nonatomic, readonly) FCFeedEdition *edition;
@property (nonatomic, readonly) _Bool isFirstFromEdition;
@property (nonatomic, readonly) _Bool canBeExtended;
@property (nonatomic, readonly) _Bool hasStrictHeadlineOrder;
@property (nonatomic, readonly) _Bool shouldPresentCollapsed;
@property (nonatomic, readonly, getter=isTopStories) _Bool topStories;
@property (copy, nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) _Bool usesPlaceholderHeadlines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long feedElementType;
@property (copy, nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (copy, nonatomic, readonly) NSString *backingTagID;
@property (copy, nonatomic, readonly) NSArray *issueIDs;
@property (nonatomic, readonly) id <FCForYouBridgedFeedGroup> bridgedGroup;

+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;
+ (id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 eyebrowText:(id)arg7 ctaText:(id)arg8 titleColor:(id)arg9 darkStyleTitleColor:(id)arg10 backgroundGradient:(id)arg11 darkStyleBackgroundGradient:(id)arg12 cardStyle:(id)arg13 darkCardStyle:(id)arg14 discoverMoreVideosInfo:(id)arg15 videoPlaylistHeadlines:(id)arg16 L2FeedDescriptor:(id)arg17 backingTagID:(id)arg18 edition:(id)arg19 isFirstFromEdition:(_Bool)arg20 elements:(id)arg21 issueIDs:(id)arg22 bridgedGroup:(id)arg23 options:(unsigned long long)arg24 mergeID:(unsigned long long)arg25;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 darkStyleTitleColor:(id)arg6 backgroundGradient:(id)arg7 darkStyleBackgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 elements:(id)arg12 options:(unsigned long long)arg13;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 bridgedGroup:(id)arg4;
- (id)copyWithEdition:(id)arg1 isFirst:(_Bool)arg2;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithElements:(id)arg1;
- (id)equivalentTopicIDs;
- (_Bool)isGap;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 eyebrowText:(id)arg5 ctaText:(id)arg6 cardStyle:(id)arg7 darkCardStyle:(id)arg8 elements:(id)arg9 options:(unsigned long long)arg10;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 L2FeedDescriptor:(id)arg4 issueIDs:(id)arg5;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 darkStyleTitleColor:(id)arg7 backgroundGradient:(id)arg8 darkStyleBackgroundGradient:(id)arg9 discoverMoreVideosInfo:(id)arg10 videoPlaylistHeadlines:(id)arg11 L2FeedDescriptor:(id)arg12 elements:(id)arg13 options:(unsigned long long)arg14;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 elements:(id)arg3 options:(unsigned long long)arg4;
- (_Bool)containsHeadlineIdenticalTo:(id)arg1;

@end
