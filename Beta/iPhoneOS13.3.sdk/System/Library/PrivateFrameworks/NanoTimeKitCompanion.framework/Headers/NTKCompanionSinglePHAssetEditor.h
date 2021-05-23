/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor

@property (nonatomic) _Bool shouldFinalize;

+ (id)_assetForResourceDirectoryForDevice:(id)arg1;
+ (id)_createResourceDirectoryForSinglePHAssetForDevice:(id)arg1 previewOnly:(_Bool)arg2;

- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)finalizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(_Bool)arg3;

@end
