/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@protocol EDSearchableIndexDataSource <Swift>

- (unsigned short)searchableIndex:assignTransaction:updates: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndex:invalidateItemsGreaterThanTransaction: /* Error: Ran out of types for this method. */;
- (unsigned short)updatesForSearchableIndex:excludingIdentifiers:count:cancelationToken: /* Error: Ran out of types for this method. */;
- (unsigned short)indexingTypeForSearchableIndex:item: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndex:assignIndexingType:forIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)verificationDataSamplesForSearchableIndex:count: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndex:invalidateItemsInTransactions: /* Error: Ran out of types for this method. */;
- (unsigned short)searchableIndex:willRemoveIdentifiers:type: /* Error: Ran out of types for this method. */;
- (unsigned short)childIdentifiersToRemoveFromSearchableIndex:whenRemovingParentIdentifiers: /* Error: Ran out of types for this method. */;

@end
