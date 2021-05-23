/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCIssueReadingHistoryItem <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *issueID;
@property (copy, nonatomic, readonly) NSDate *lastVisitedDate;
@property (copy, nonatomic, readonly) NSDate *lastBadgedDate;
@property (copy, nonatomic, readonly) NSDate *lastEngagedDate;
@property (copy, nonatomic, readonly) NSDate *lastRemovedFromMyMagazinesDate;
@property (copy, nonatomic, readonly) NSString *lastVisitedArticleID;
@property (copy, nonatomic, readonly) NSString *lastVisitedPageID;

- (unsigned short)asCKRecord;

@end
