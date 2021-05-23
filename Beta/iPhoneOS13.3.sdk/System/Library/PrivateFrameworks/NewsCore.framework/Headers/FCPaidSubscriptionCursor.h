/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSMutableDictionary, NSMutableSet;

@interface FCPaidSubscriptionCursor : FCFeedGroupEmittingCursor

{
    NSMutableSet *_processedChannelIDs;
    NSMutableDictionary *_supplementalArticleIDs;
    NSMutableDictionary *_expiredChannelIDs;
}

@property (retain, nonatomic) NSMutableSet *processedChannelIDs;
@property (retain, nonatomic) NSMutableDictionary *supplementalArticleIDs;
@property (retain, nonatomic) NSMutableDictionary *expiredChannelIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)purgeExpiredChannelIdentifiersNotInArray:(id)arg1;
- (unsigned long long)expiredGroupEmitCountForChannelWithIdentifier:(id)arg1;
- (void)purgeSupplementalArticleIDsNotInArray:(id)arg1 forChannel:(id)arg2;
- (void)trackSupplementalFeedItem:(id)arg1;
- (unsigned long long)countForFeedItem:(id)arg1;

@end
