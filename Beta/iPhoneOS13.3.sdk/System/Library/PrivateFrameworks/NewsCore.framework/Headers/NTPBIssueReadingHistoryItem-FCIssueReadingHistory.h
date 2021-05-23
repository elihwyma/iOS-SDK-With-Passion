/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBIssueReadingHistoryItem.h>

@class NSDate, NSString;

@interface NTPBIssueReadingHistoryItem (FCIssueReadingHistory)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *issueID;
@property (copy, nonatomic, readonly) NSDate *lastVisitedDate;
@property (copy, nonatomic, readonly) NSDate *lastBadgedDate;
@property (copy, nonatomic, readonly) NSDate *lastEngagedDate;
@property (copy, nonatomic, readonly) NSDate *lastRemovedFromMyMagazinesDate;
@property (copy, nonatomic, readonly) NSString *lastVisitedArticleID;
@property (copy, nonatomic, readonly) NSString *lastVisitedPageID;

+ (id)issueReadingHistoryItemWithCKRecord:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)setLastBadgedDate:(id)arg1;
- (void)setLastEngagedDate:(id)arg1;
- (void)setLastRemovedFromMyMagazinesDate:(id)arg1;
- (id)asCKRecord;
- (void)writeToKeyValuePair:(id)arg1;

@end
