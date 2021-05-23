/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHCollectionReference.h>

@class NSArray;

@interface PHAssetCollectionReference : PHCollectionReference

{
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    NSArray *_transientAssetReferences;
}

@property (copy, nonatomic, readonly) NSArray *transientAssetReferences;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly) long long assetCollectionSubtype;

+ (id)representedType;
+ (id)referenceForAssetCollection:(id)arg1;

- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (_Bool)transient;
- (id)_transientCollectionInLibrary:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4 assetReferences:(id)arg5 transientIdentifier:(id)arg6 transientTitle:(id)arg7;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 type:(long long)arg3 subtype:(long long)arg4;

@end
