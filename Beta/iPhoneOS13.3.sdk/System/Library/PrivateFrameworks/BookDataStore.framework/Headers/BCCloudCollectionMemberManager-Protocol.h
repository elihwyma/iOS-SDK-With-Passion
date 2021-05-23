/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@protocol BCCloudCollectionMemberManager <Swift>

- (unsigned short)currentCollectionMemberCloudSyncVersions: /* Error: Ran out of types for this method. */;
- (unsigned short)setCollectionMember:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setCollectionMembers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCollectionMemberForCollectionMemberID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCollectionMemberForCollectionMemberIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)collectionMemberForCollectionMemberID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCollectionMembersIncludingDeleted:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCollectionMembersInCollectionID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMaxSortOrderInCollectionID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getCollectionMemberChangesSince:completion: /* Error: Ran out of types for this method. */;

@end
