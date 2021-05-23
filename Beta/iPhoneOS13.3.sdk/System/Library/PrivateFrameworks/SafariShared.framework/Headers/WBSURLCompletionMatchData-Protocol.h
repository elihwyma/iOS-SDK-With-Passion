/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSString;

@protocol WBSURLCompletionMatchData <Swift>

@property (nonatomic, readonly) NSString *originalURLString;
@property (nonatomic, readonly) _Bool containsBookmark;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) _Bool lastVisitWasFailure;
@property (nonatomic, readonly) long long visitCount;

- (unsigned short)pageTitleAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)pageTitleForUserVisibleURLStringAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)userVisibleURLStringForPageTitleAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)userVisibleURLStringAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)enumeratePageTitlesUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateUserVisibleURLsUsingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)topSitesScoreForPageTitleAtIndex:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)topSitesScoreForURLStringAtIndex:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)matchDataByMergingWithMatchData: /* Error: Ran out of types for this method. */;
- (unsigned short)matchesAutocompleteTrigger: /* Error: Ran out of types for this method. */;

@end
