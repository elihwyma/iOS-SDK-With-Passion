/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (DMLastMigrationResults)

+ (id)dmlmr_buildVersionKey;
+ (id)dmlmr_successKey;
+ (id)dmlmr_lastMigrationResultsWithSuccess:(_Bool)arg1 buildVersion:(id)arg2;

- (id)dmlmr_success;
- (id)dmlmr_buildVersion;

@end
