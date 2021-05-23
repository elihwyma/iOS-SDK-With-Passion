/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSEventsTableBase.h>

@interface SSWatchMetricsEventTable : SSEventsTableBase

+ (id)databasePath;

- (_Bool)_setupDatabase;
- (_Bool)_migrateToVersion1;
- (_Bool)_migrateToVersion2;
- (_Bool)_migrateToVersion3;
- (_Bool)_migrateToVersion4;
- (_Bool)_migrateToVersion5;
- (_Bool)_migrateToVersion6;
- (_Bool)_migrateToVersion7;

@end
