/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class CKRecord, NSDate, NSString;

@protocol FCReadingHistoryItem <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *articleID;
@property (copy, nonatomic, readonly) NSString *sourceChannelTagID;
@property (copy, nonatomic, readonly) NSString *deviceID;
@property (copy, nonatomic, readonly) NSDate *lastVisitedAt;
@property (nonatomic, readonly) long long maxVersionRead;
@property (copy, nonatomic, readonly) NSDate *firstSeenAt;
@property (copy, nonatomic, readonly) NSDate *firstSeenAtOfMaxVersionSeen;
@property (nonatomic, readonly) long long maxVersionSeen;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) _Bool hasArticleBeenRead;
@property (nonatomic, readonly) _Bool hasArticleBeenSeen;
@property (nonatomic, readonly) _Bool hasArticleBeenMarkedOffensive;
@property (nonatomic, readonly) _Bool hasArticleBeenConsumed;
@property (nonatomic, readonly) unsigned long long articleLikingStatus;
@property (nonatomic, readonly) CKRecord *asCKRecord;

@end
