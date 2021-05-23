/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/Swift-Protocol.h>

@protocol SBKSyncTransactionProcessing <Swift>

- (unsigned short)transaction:willProcessResponseData: /* Error: Ran out of types for this method. */;
- (unsigned short)transaction:didProcessResponseData: /* Error: Ran out of types for this method. */;
- (unsigned short)transaction:processUpdatedKey:data:conflict:isDirty: /* Error: Ran out of types for this method. */;
- (unsigned short)transaction:processDeletedKey:isDirty: /* Error: Ran out of types for this method. */;
- (unsigned short)transaction:keyValuePairForUpdatedKey: /* Error: Ran out of types for this method. */;

@end
