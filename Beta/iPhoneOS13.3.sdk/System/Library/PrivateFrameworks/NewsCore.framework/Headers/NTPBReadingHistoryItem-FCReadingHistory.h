/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBReadingHistoryItem.h>

#import <NewsCore/Swift-Protocol.h>

@class CKRecord, NSDate, NSString;

@interface NTPBReadingHistoryItem (FCReadingHistory) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)readingHistoryItemWithCKRecord:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setHasArticleBeenSeen:(_Bool)arg1;
- (void)setFirstSeenAt:(id)arg1;
- (void)setFirstSeenAtOfMaxVersionSeen:(id)arg1;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setHasArticleBeenMarkedOffensive:(_Bool)arg1;
- (void)setHasArticleBeenConsumed:(_Bool)arg1;
- (void)setLastVisitedAt:(id)arg1;
- (void)setHasArticleBeenRead:(_Bool)arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
