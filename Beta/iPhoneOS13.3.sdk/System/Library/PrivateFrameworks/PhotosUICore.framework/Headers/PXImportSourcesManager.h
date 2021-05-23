/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSMutableArray, PHImportController, PHImportSource;

@interface PXImportSourcesManager : PXObservable

{
    NSMutableArray *_importSources;
    PHImportSource *_URLImportSource;
    PHImportController *_importController;
}

@property (nonatomic, readonly) PHImportController *importController;
@property (nonatomic, readonly) NSArray *importSources;

+ (id)sharedController;

- (id)init;
- (void)importController:(id)arg1 removedImportSource:(id)arg2;
- (void)importController:(id)arg1 addedImportSource:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)_notifyObserversDidAddImportSource:(id)arg1;
- (void)_notifyObserversDidUpdateImportSource:(id)arg1;
- (void)_notifyObserversDidRemoveImportSource:(id)arg1;
- (id)updateImportSourceForURLs:(id)arg1;

@end
