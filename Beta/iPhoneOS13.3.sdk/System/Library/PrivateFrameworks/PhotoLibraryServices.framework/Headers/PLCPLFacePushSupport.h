/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject

{
    id <PLSyncContext> _syncContext;
}

+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 inPhotoLibrary:(id)arg3;
+ (_Bool)_shouldPushBeingKeyFace:(id)arg1;
+ (_Bool)isFaceSyncable:(id)arg1;
+ (void)markSyncableFacesAsPushedInAsset:(id)arg1;

- (id)initWithSyncContext:(id)arg1;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1 algorithmVersion:(long long *)arg2;
- (_Bool)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1 assetChange:(id)arg2;
- (id)cplFaceRefsFromFaces:(id)arg1 algorithmVersion:(long long *)arg2;
- (id)cplFaceRefFromFace:(id)arg1;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;

@end
