/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHCollectionListReference : PHCollectionReference

{
    long long _collectionListType;
    long long _collectionListSubtype;
    NSArray *_transientCollectionReferences;
}

@property (copy, nonatomic, readonly) NSArray *transientCollectionReferences;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly) long long collectionListSubtype;

+ (id)representedType;
+ (id)referenceForCollectionList:(id)arg1;

- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (_Bool)transient;
- (id)_transientCollectionInLibrary:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4 collectionReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 collectionListType:(long long)arg3 collectionListSubtype:(long long)arg4;

@end
