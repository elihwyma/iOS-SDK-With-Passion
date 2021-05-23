/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3MusicLibrary, NSDictionary;

@interface ML3ExportItem : NSObject

{
    NSDictionary *_properties;
    long long _persistentId;
    ML3MusicLibrary *_library;
    Class _entityClass;
}

@property (nonatomic, readonly) long long persistentId;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) Class entityClass;

+ (unsigned int *)allExportPropertyKeysForEntityClass:(Class)arg1 returnedCount:(unsigned int *)arg2;

- (id)description;
- (_Bool)isValid;
- (id)valueForProperty:(unsigned int)arg1;
- (id)stringValueForProperty:(unsigned int)arg1;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 propertyKeysToExport:(unsigned int *)arg3 numKeys:(unsigned int)arg4 library:(id)arg5;
- (id)_propertyNamesFromKeys:(unsigned int *)arg1 numKeys:(unsigned int)arg2;
- (id)initWithPersistentId:(long long)arg1 entityClass:(id)arg2 properties:(id)arg3 library:(id)arg4;
- (id)_propertyNameForKey:(unsigned int)arg1;
- (id)_allExportPropertyNames;
- (id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 library:(id)arg3;
- (BOOL)charValueForProperty:(unsigned int)arg1;
- (short)shortValueForProperty:(unsigned int)arg1;
- (int)longValueForProperty:(unsigned int)arg1;
- (long long)longlongValueForProperty:(unsigned int)arg1;
- (id)dataValueForProperty:(unsigned int)arg1;
- (_Bool)hasValueForProperty:(unsigned int)arg1;
- (unsigned int *)propertyKeysToExport:(unsigned int *)arg1;
- (id)exportData;

@end
