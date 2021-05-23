/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject

{
    WFDatabase *_database;
}

@property (nonatomic, readonly) WFDatabase *database;

+ (void)fetchMigrationFlagWithCompletion:(CDUnknownBlockType)arg1;
+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)arg1;

- (id)initWithDatabase:(id)arg1;
- (_Bool)migrateFromManagedObjectContext:(id)arg1 error:(id *)arg2;
- (_Bool)saveRecord:(id)arg1 error:(id *)arg2;

@end
