/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@protocol EMQueryResultsObserver <Swift>

- (unsigned short)queryDidStartRecovery;
- (unsigned short)queryMatchedAddedObjectIDs:before:extraInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)queryMatchedAddedObjectIDs:after:extraInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)queryMatchedMovedObjectIDs:before: /* Error: Ran out of types for this method. */;
- (unsigned short)queryMatchedMovedObjectIDs:after: /* Error: Ran out of types for this method. */;
- (unsigned short)queryMatchedChangesByObjectIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)queryMatchedDeletedObjectIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)queryDidFinishInitialLoad;
- (unsigned short)queryDidFinishRemoteSearch;
- (unsigned short)observerContainsObjectID: /* Error: Ran out of types for this method. */;
- (unsigned short)queryReplacedObjectID:withNewObjectID: /* Error: Ran out of types for this method. */;

@end
