/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHObjectReference.h>

@interface PHAssetReference : PHObjectReference

{
    _Bool _trashed;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    unsigned long long _sourceType;
}

@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) unsigned long long sourceType;
@property (nonatomic, readonly, getter=isTrashed) _Bool trashed;

+ (id)representedType;
+ (id)referenceForAsset:(id)arg1;

- (id)initWithDictionary:(id)arg1 referenceType:(id)arg2;
- (id)dictionaryForReferenceType:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 libraryURL:(id)arg2 mediaType:(long long)arg3 subtypes:(unsigned long long)arg4 sourceType:(unsigned long long)arg5 isTrashed:(_Bool)arg6;

@end
