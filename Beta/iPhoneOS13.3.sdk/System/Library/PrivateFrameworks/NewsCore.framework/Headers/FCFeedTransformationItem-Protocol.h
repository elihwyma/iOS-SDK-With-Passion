/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCChannelProviding;

@protocol FCFeedTransformationItem <Swift>

@property (copy, nonatomic, readonly) NSString *feedID;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *clusterID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) unsigned long long order;
@property (copy, nonatomic, readonly) NSString *sourceChannelID;
@property (nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property (nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property (nonatomic, readonly) double globalUserFeedback;
@property (nonatomic, readonly, getter=isFromBlockedStorefront) _Bool fromBlockedStorefront;
@property (nonatomic, readonly, getter=isExplicitContent) _Bool explicitContent;
@property (nonatomic, readonly) long long minimumNewsVersion;
@property (nonatomic, readonly) long long publisherArticleVersion;
@property (nonatomic, readonly) _Bool canBePurchased;
@property (copy, nonatomic, readonly) id <FCChannelProviding> sourceChannel;

@end
