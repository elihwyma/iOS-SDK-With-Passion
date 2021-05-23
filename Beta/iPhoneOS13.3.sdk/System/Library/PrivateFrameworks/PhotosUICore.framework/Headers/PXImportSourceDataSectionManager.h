/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDataSectionManager.h>

@class NSArray, NSString, PHPhotoLibrary, PXImportSourcesManager;

@interface PXImportSourceDataSectionManager : PXDataSectionManager

{
    PHPhotoLibrary *_photoLibrary;
    PXImportSourcesManager *_importSourcesManager;
    NSArray *_importSources;
}

@property (nonatomic, readonly) PXImportSourcesManager *importSourcesManager;
@property (retain, nonatomic) NSArray *importSources;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)createDataSection;
- (void)importSourcesManager:(id)arg1 didUpdateImportSource:(id)arg2;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;

@end
