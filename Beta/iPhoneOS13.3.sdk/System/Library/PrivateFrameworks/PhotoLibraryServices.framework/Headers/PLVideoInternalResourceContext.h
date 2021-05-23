/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSString, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject

{
    NSManagedObjectContext *_moc;
    PLManagedAsset *_asset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)hasAdjustments;
- (_Bool)isPhotoIris;
- (_Bool)shouldUseNonAdjustedVersion;
- (double)sizeThresholdForHighQuality;
- (id)videoResourcesMatchingVersions:(id)arg1;
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;
- (_Bool)validateResource:(id)arg1;
- (void)repairResource:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 assetObjectID:(id)arg2;
- (id)backingResourceForVideoResource:(id)arg1;

@end
