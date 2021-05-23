/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSManagedObjectID, NSString, PHObjectReference, PHPhotoLibrary;

@interface PHObject : NSObject <Swift>

{
    _Bool _deleted;
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    unsigned long long _propertyHint;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PHObjectReference *objectReference;
@property (readonly) NSManagedObjectID *objectID;
@property (readonly) id identifier;
@property (readonly, getter=isDeleted) _Bool deleted;
@property unsigned long long propertyHint;
@property (readonly) NSString *uuid;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly, getter=isTransient) _Bool transient;
@property (copy, nonatomic, readonly) NSString *localIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsRejectedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)propertyKeyForEntityKey:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (_Bool)managedObjectSupportsHiddenState;
+ (_Bool)managedObjectSupportsVisibilityState;
+ (_Bool)managedObjectSupportsBursts;
+ (_Bool)managedObjectSupportsSavedAssetType;
+ (_Bool)managedObjectSupportsMontage;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (_Bool)managedObjectSupportsPersonFilters;
+ (_Bool)managedObjectSupportsKeyFaces;
+ (id)localIdentifierExpressionForFetchRequests;
+ (_Bool)managedObjectSupportsFaceState;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (id)identifierPropertiesToFetch;
+ (_Bool)managedObjectSupportsMomentShareTrashedState;
+ (_Bool)managedObjectSupportsMomentShareExpiredState;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3;
+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(CDUnknownBlockType)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (_Bool)hasLoadedPropertySet:(id)arg1;
- (id)_shortObjectIDURI;

@end
