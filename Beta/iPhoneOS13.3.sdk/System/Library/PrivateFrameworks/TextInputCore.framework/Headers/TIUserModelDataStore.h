/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface TIUserModelDataStore : NSObject

{
    struct sqlite3 *_user_model_db;
    NSObject<OS_dispatch_queue> *_database_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)singletonInstance;
+ (id)sharedUserModelDataStore;
+ (id)initializeDataStoreAtPath:(id)arg1;
+ (void)setSharedTIUserModelDataStore:(id)arg1;

- (void)dealloc;
- (_Bool)setDatabaseVersion:(int)arg1;
- (_Bool)closeDatabase;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (_Bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (_Bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (_Bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (id)getInputModesForKey:(id)arg1;
- (id)getAllKnownInputModes;
- (_Bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
- (id)getDurableValueForKey:(id)arg1;
- (_Bool)createOrOpenDatabaseAtPath:(id)arg1;
- (id)getV1MigrationSchema;
- (id)getCreationSchema;
- (_Bool)applySchema:(id)arg1;
- (int)getDatabaseVersion;
- (_Bool)attemptSchemaMigration;
- (_Bool)purgeDurableDataForKeyPrefix:(id)arg1;

@end
