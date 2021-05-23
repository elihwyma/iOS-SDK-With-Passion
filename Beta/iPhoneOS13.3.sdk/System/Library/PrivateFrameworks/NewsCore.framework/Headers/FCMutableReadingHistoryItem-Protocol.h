/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCMutableReadingHistoryItem <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *sourceChannelTagID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDate *lastVisitedAt;
@property (nonatomic) long long maxVersionRead;
@property (copy, nonatomic) NSDate *firstSeenAt;
@property (copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (nonatomic) _Bool hasArticleBeenRead;
@property (nonatomic) _Bool hasArticleBeenSeen;
@property (nonatomic) _Bool hasArticleBeenMarkedOffensive;
@property (nonatomic) _Bool hasArticleBeenConsumed;
@property (nonatomic) unsigned long long articleLikingStatus;

@end
