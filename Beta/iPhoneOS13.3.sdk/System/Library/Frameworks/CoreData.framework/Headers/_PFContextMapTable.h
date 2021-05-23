/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class _PFModelMap;

__attribute__((visibility("hidden")))
@interface _PFContextMapTable : NSObject

{
    unsigned long long _slotLimit;
    struct __CFDictionary *_objectsByTemporaryID;
    struct __CFDictionary **_objectsByPermanentObjectID;
    struct __CFDictionary **_objectsBy64bitPKID;
    unsigned long long *_capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags {
        unsigned int _usesWeakReferences:1;
        unsigned int _garbageCollectionEnabled:1;
        unsigned int _reservedFlags:30;
    } _flags;
    _PFModelMap *_modelMap;
}

- (void)dealloc;
- (void)finalize;
- (void)_dispose;
- (id)initWithWeaksReferences:(_Bool)arg1;
- (void)setForUseWithCoordinator:(id)arg1;
- (unsigned long long)getAllObjects:(id *)arg1;
- (void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned int)arg2;
- (void)clearTemporaryIDs;

@end
