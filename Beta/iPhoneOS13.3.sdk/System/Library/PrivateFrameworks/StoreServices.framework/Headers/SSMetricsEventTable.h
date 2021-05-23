/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSEventsTableBase.h>

@interface SSMetricsEventTable : SSEventsTableBase

+ (id)databasePath;
+ (id)_eventsTableName;

- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)_setupDatabase;
- (id)_pragmaValueForName:(id)arg1;
- (_Bool)_migrateToVersion1;
- (_Bool)_migrateToVersion2;
- (_Bool)_migrateToVersion3;

@end
