/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

#import <WelcomeKitUI/Swift-Protocol.h>

@protocol WLDataMigrationDelegate <Swift>

- (unsigned short)dataMigratorDidGetInterrupted;
- (unsigned short)dataMigrator:didFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)dataMigratorDidBecomeRestartable: /* Error: Ran out of types for this method. */;
- (unsigned short)dataMigratorDidFinish:withImportErrors: /* Error: Ran out of types for this method. */;
- (unsigned short)dataMigrator:didUpdateMigrationState: /* Error: Ran out of types for this method. */;
- (unsigned short)dataMigrator:didUpdateProgressPercentage: /* Error: Ran out of types for this method. */;
- (unsigned short)dataMigrator:didUpdateRemainingDownloadTime: /* Error: Ran out of types for this method. */;

@end
