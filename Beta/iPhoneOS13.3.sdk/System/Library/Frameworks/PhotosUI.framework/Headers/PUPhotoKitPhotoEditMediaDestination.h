/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUMediaDestination.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination

{
    NSMutableDictionary *_pendingRequestsByRequestIdentifier;
}

@property (nonatomic, readonly, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier;

- (id)init;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isSavingRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)supportsProgressForRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_requestDidFinish:(id)arg1;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;

@end
