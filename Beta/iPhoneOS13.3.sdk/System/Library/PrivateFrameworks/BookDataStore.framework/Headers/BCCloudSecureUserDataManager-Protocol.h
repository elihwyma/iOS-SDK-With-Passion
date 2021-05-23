/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@protocol BCCloudSecureUserDataManager <Swift>

- (unsigned short)setEnableSecureUserDataCloudSync: /* Error: Ran out of types for this method. */;
- (unsigned short)currentCloudSyncVersions: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserDatum:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteUserDatumForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userDatumForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userDatumIncludingDeleted:forKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserDataIncludingDeleted:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserDataChangesSince:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resolvedUserDataValueForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userDataValueForKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserDataValue:forKey:completion: /* Error: Ran out of types for this method. */;

@end
