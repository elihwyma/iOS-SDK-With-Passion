/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSStoreMapping.h>

@class NSKnownKeysDictionary, NSManagedObjectModel, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLModel : NSStoreMapping

{
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    id *_entityDescriptionToSQLMap;
    unsigned long long _brokenHashVersion;
    _Bool _retainLeopardStyleDictionaries;
    _Bool _modelHasPrecomputedKeyOrder;
    _Bool _hasVirtualToOnes;
    unsigned int _entityIDOffset;
    unsigned int _lastEntityID;
}

- (void)dealloc;
- (void)finalize;
- (id)entities;
- (id)managedObjectModel;
- (id)configurationName;
- (id)entityForID:(unsigned long long)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)entitiesByName;
- (unsigned int)_entityOffset;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(_Bool)arg3;
- (id)entityNamed:(id)arg1;
- (unsigned long long)entityIDForName:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3;
- (_Bool)_modelHasPrecomputedKeyOrder;
- (void)_recordHasVirtualToOnes;
- (_Bool)_useLeopardStyleHashing;
- (_Bool)_useSnowLeopardStyleHashing;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (void)_addIndexedEntity:(id)arg1;
- (_Bool)_generateModel:(id)arg1 error:(id *)arg2;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(_Bool)arg3 brokenHashVersion:(unsigned long long)arg4;
- (id)_entityMapping;
- (id)_sqlEntityWithRenamingIdentifier:(id)arg1;
- (unsigned int)_lastEntityID;
- (_Bool)_retainHashHack;

@end
