/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <WelcomeKitCore/Swift-Protocol.h>

@protocol WLMigrationDataSource <Swift>

- (unsigned short)dataForSummary:migrator:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsDataForMigrator:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)summariesDataForAccount:migrator:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fileForSummary:migrator:fileAccessor:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dataSegmentForSummary:byteRange:migrator:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateUIWithProgress:logString:completion: /* Error: Ran out of types for this method. */;

@end
