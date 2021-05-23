/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class CLSDataStore, NSDate, NSString;

@interface CLSObject : NSObject

{
    _Bool _deleted;
    _Bool _modified;
    _Bool _enforceImmutablility;
    CLSDataStore *_dataStore;
    NSString *_parentObjectID;
    NSString *_appIdentifier;
    struct NSMutableDictionary *_childrenByID;
    CLSObject *_parent;
    struct os_unfair_recursive_lock_s _lock;
    _Bool _temporary;
    unsigned int _generation;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    NSString *_objectID;
    NSDate *_dateExpires;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isTemporary) _Bool temporary;
@property unsigned int generation;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *objectID;
@property (copy, nonatomic) NSString *parentObjectID;
@property (weak, nonatomic) CLSObject *parent;
@property (weak, nonatomic) CLSDataStore *dataStore;
@property (nonatomic, getter=isDeleted) _Bool deleted;
@property (nonatomic, getter=isModified) _Bool modified;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *dateLastModified;
@property (retain, nonatomic) NSDate *dateExpires;
@property (nonatomic, getter=isImmutablilityEnforced) _Bool enforceImmutablility;
@property (nonatomic, readonly) id vertexID;

+ (_Bool)supportsSecureCoding;
+ (id)dateFormatter;
+ (id)relations;

- (id)init;
- (void)addChild:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)lock;
- (void)unlock;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)identity;
- (void)removeChild:(id)arg1;
- (void)_addChild:(id)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)ancestorOfClass:(Class)arg1;
- (id)childrenOfClass:(Class)arg1;
- (void)mergeWithObject:(id)arg1;
- (_Bool)validateObject:(id *)arg1;
- (void)addChild:(id)arg1 changedPropertyName:(id)arg2;
- (void)removeChild:(id)arg1 changedPropertyName:(id)arg2;
- (long long)effectiveAuthorizationStatus;
- (void)didSaveObject;
- (void)willSaveObject;
- (id)initWithDeletedObjectID:(id)arg1;
- (void)enumerateChildren:(CDUnknownBlockType)arg1;
- (void)_addChild:(id)arg1 lock:(_Bool)arg2;
- (void)enumerateTree:(CDUnknownBlockType)arg1;

@end
