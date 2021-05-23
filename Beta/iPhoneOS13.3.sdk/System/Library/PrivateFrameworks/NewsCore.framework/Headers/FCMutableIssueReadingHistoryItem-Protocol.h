/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSDate, NSString;

@protocol FCMutableIssueReadingHistoryItem <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *issueID;
@property (copy, nonatomic) NSDate *lastVisitedDate;
@property (copy, nonatomic) NSDate *lastBadgedDate;
@property (copy, nonatomic) NSDate *lastEngagedDate;
@property (copy, nonatomic) NSDate *lastRemovedFromMyMagazinesDate;
@property (copy, nonatomic) NSString *lastVisitedArticleID;
@property (copy, nonatomic) NSString *lastVisitedPageID;

@end
