/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

@class NTKCFaceDetailSyncedAlbumCell;

@interface NTKCFaceDetailSyncedAlbumSectionController : NTKCFaceDetailSectionController

@property (retain, nonatomic) NTKCFaceDetailSyncedAlbumCell *cell;

+ (_Bool)hasSyncedAlbumSectionForFace:(id)arg1 inGallery:(_Bool)arg2;

- (void)_commonInit;
- (void)faceDidChange;

@end
