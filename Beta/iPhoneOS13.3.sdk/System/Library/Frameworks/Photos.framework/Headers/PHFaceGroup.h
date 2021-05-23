/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObject.h>

@interface PHFaceGroup : PHObject

{
    long long _unnamedFaceCount;
    long long _personModelId;
    long long _personBuilderState;
}

@property (nonatomic, readonly) long long personModelId;
@property (nonatomic, readonly) long long personBuilderState;
@property (nonatomic, readonly) long long unnamedFaceCount;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)fetchFaceGroupsWithOptions:(id)arg1;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchEmptyFaceGroupsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;

- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;
- (long long)getPersonModelId;

@end
