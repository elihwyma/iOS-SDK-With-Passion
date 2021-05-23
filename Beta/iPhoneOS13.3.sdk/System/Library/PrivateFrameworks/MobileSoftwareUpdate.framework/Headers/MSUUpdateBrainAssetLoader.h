/*
 Image: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
 */

#import <MobileSoftwareUpdate/MSUUpdateBrainLoader.h>

@class MAAsset;

@interface MSUUpdateBrainAssetLoader : MSUUpdateBrainLoader

{
    MAAsset *_updateAsset;
}

@property (retain, nonatomic) MAAsset *updateAsset;

- (void)dealloc;
- (_Bool)cancel:(id *)arg1;
- (id)initWithUpdateAsset:(id)arg1;
- (void)loadUpdateBrainWithMAOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (void)adjustMAOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)adjustOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)purgeUpdateBrains:(id *)arg1;
- (long long)requiredDiskSpace:(id *)arg1;

@end
