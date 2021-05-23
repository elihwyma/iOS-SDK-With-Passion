/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSMutableDictionary;

@protocol AEPackageTransportDelegate;

@interface AEPackageTransport : PXObservable

{
    id <AEPackageTransportDelegate> _delegate;
    NSMutableArray *__stagedIdentifiersInOrder;
    NSMutableDictionary *__stagedPackagesByIdentifier;
}

@property (nonatomic, readonly) NSMutableArray *_stagedIdentifiersInOrder;
@property (nonatomic, readonly) NSMutableDictionary *_stagedPackagesByIdentifier;
@property (weak, nonatomic) id <AEPackageTransportDelegate> delegate;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)reportError:(id)arg1;
- (void)_addPackageToStaging:(id)arg1;
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;
- (void)commitPackage:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (void)stagePackages:(id)arg1 andNotify:(_Bool)arg2;
- (void)unstagePackageWithIdentifier:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1;
- (id)orderedStagedIdentifiers;
- (id)stagedPackageForIdentifier:(id)arg1;
- (id)stagedPackages;
- (id)packagesWithLivePhotoContent;

@end
