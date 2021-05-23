/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@class NSArray, NSString;

@protocol FCIssueReadingHistoryType

@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)bookmarkForLastVisitToIssueWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)markIssueWithID:asVisitedWithBookmark: /* Error: Ran out of types for this method. */;
- (unsigned short)markIssueAsBadgedWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)markIssueAsEngagedWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)markIssueAsRemovedFromMyMagazinesWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)hasIssueWithIDBeenVisited: /* Error: Ran out of types for this method. */;
- (unsigned short)hasIssueWithIDBeenBadged: /* Error: Ran out of types for this method. */;
- (unsigned short)hasIssueWithIDBeenEngaged: /* Error: Ran out of types for this method. */;
- (unsigned short)lastVisitedDateForIssueWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)lastEngagedDateForIssueWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)lastRemovedFromMyMagazinesDateForIssueWithID: /* Error: Ran out of types for this method. */;

@end
