/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSKnownKeysDictionary, NSManagedObjectID, NSString, PHPhotoLibrary;

@interface PHThumbnailAsset : NSObject <Swift>

{
    NSKnownKeysDictionary *_dictionary;
    unsigned short _firstPropertyIndex;
    NSManagedObjectID *_objectID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) _Bool complete;
@property (nonatomic, readonly) long long cloudPlaceholderKind;

+ (id)propertiesToFetch;
+ (id)entityName;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)effectiveThumbnailIndex;
- (id)pl_photoLibrary;
- (id)initWithObjectID:(id)arg1 knownKeysDictionary:(id)arg2 firstKeyIndex:(unsigned short)arg3 photoLibrary:(id)arg4;

@end
