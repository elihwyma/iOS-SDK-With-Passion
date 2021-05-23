/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

#import <NewsToday/Swift-Protocol.h>

@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <Swift>

{
    _Bool _attemptedCachedOnly;
    NSDictionary *_feedContextByFeedID;
    NSObject *_fetchedRecordsInterestToken;
}

@property (nonatomic, readonly) _Bool attemptedCachedOnly;
@property (copy, nonatomic, readonly) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic, readonly) NSObject *fetchedRecordsInterestToken;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttemptedCachedOnly:(_Bool)arg1 feedContextByFeedID:(id)arg2 fetchedRecordsInterestToken:(id)arg3;

@end
