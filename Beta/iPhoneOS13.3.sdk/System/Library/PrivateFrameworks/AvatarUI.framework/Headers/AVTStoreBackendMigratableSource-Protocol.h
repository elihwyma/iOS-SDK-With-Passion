/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTStoreBackendMigratableSource <Swift>

- (unsigned short)migrationNeeded;
- (unsigned short)createSourceBackend;
- (unsigned short)finalizeMigration: /* Error: Ran out of types for this method. */;
- (unsigned short)migratedRecordFromRecord:index:totalCount: /* Error: Ran out of types for this method. */;

@end
