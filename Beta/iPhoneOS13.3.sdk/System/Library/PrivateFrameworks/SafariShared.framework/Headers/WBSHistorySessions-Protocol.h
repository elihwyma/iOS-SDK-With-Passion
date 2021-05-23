/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@class NSArray;

@protocol WBSHistorySessions

@property (copy, nonatomic, readonly) NSArray *orderedSessions;
@property (nonatomic, readonly) unsigned long long numberOfSessions;

- (unsigned short)numberOfItemsVisitedInSession: /* Error: Ran out of types for this method. */;
- (unsigned short)itemLastVisitedInSession:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)itemsLastVisitedInSession: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateOrderedItemsLastVisitedInSession:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)orderedItemsNewerThanDate:maxCount:completionHandler: /* Error: Ran out of types for this method. */;

@end
