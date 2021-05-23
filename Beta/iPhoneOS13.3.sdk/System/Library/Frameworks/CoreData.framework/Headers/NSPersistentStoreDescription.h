/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSPersistentCloudKitContainerOptions, NSString, NSURL;

@interface NSPersistentStoreDescription : NSObject

{
    NSMutableDictionary *_options;
    NSString *_type;
    NSString *_configuration;
    NSURL *_url;
}

@property (retain) NSPersistentCloudKitContainerOptions *cloudKitContainerOptions;
@property (copy) NSString *type;
@property (copy) NSString *configuration;
@property (copy) NSURL *URL;
@property (copy, nonatomic, readonly) NSDictionary *options;
@property (getter=isReadOnly) _Bool readOnly;
@property double timeout;
@property (copy, nonatomic, readonly) NSDictionary *sqlitePragmas;
@property _Bool shouldAddStoreAsynchronously;
@property _Bool shouldMigrateStoreAutomatically;
@property _Bool shouldInferMappingModelAutomatically;

+ (id)persistentStoreDescriptionWithURL:(id)arg1;
+ (id)inMemoryPersistentStoreDescription;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setOption:(id)arg1 forMirroringKey:(id)arg2;
- (id)mirroringDelegate;
- (id)mirroringOptions;
- (void)setMirroringDelegate:(id)arg1;
- (void)setValue:(id)arg1 forPragmaNamed:(id)arg2;
- (_Bool)shouldInvokeCompletionHandlerConcurrently;
- (void)setShouldInvokeCompletionHandlerConcurrently:(_Bool)arg1;
- (_Bool)usesPersistentHistoryTracking;
- (void)setUsesPersistentHistoryTracking:(_Bool)arg1;

@end
