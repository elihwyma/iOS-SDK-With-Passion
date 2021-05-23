/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject

{
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)entityClassName;
+ (_Bool)includesRelationshipChanges;
+ (id)uuidsFromLocalIdentifiers:(id)arg1;

- (id)initWithPhotoLibrary:(id)arg1;
- (id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
