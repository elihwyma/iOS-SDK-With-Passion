/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFUserDefaultMigrator : NSObject

+ (id)log;
+ (void)migrateDefaults:(id)arg1;
+ (id)oldKeysToNewKeysMap;
+ (void)migrateDefaultsFromOldKeysToNewKeys:(id)arg1;
+ (id)_keysToMigrateToSharedAppGroup;
+ (void)_migrateExtPropertiesPlist;
+ (id)currentDeviceIdentifer;
+ (void)migratePropertyForOldKey:(id)arg1 newKey:(id)arg2;
+ (id)mobileMailDefaultForKey:(id)arg1;
+ (void)removeMobileMailDefaultForKey:(id)arg1;
+ (_Bool)migratePreferencesToSharedAppGroup;

@end
