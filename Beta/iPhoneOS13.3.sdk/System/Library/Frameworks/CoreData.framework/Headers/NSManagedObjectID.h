/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityDescription, NSPersistentStore, NSString;

@interface NSManagedObjectID : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (weak, readonly) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) _Bool temporaryID;

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (long long)version;
+ (id)_newArchiveForScalarObjectIDs:(id)arg1;
+ (id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2;

- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)entityName;
- (id)URIRepresentation;
- (id)_storeInfo1;
- (long long)_referenceData64;
- (id)_storeIdentifier;
- (id)_referenceData;
- (id)_retainedURIString;
- (_Bool)_isPersistentStoreAlive;
- (_Bool)_preferReferenceData64;
- (int)_temporaryIDCounter;
- (long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2;

@end
