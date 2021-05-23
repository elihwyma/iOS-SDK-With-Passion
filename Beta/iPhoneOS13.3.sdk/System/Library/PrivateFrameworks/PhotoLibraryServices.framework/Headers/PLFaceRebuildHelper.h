/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext;

@interface PLFaceRebuildHelper : NSObject

{
    NSManagedObjectContext *_context;
}

- (id)initWithContext:(id)arg1;
- (void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;
- (void)updateAnalysisStateForAsset:(id)arg1;
- (void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;
- (void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2;
- (id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;

@end
