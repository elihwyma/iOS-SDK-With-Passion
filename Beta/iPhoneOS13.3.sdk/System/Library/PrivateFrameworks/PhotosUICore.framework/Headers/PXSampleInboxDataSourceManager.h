/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

@class NSArray, NSString, PXSampleInboxMediaProvider;

@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager

{
    NSArray *_mockedModels;
    PXSampleInboxMediaProvider *_sampleMediaProvider;
}

@property (retain, nonatomic) NSArray *mockedModels;
@property (retain, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (nonatomic, readonly) id <PXInboxModelMediaProvider> mediaProvider;
@property (nonatomic, readonly) id <PXInboxModelTitleProvider> titleProvider;

- (id)init;
- (id)_dataSourceSnapshot;
- (void)_changeData;
- (id)createInitialDataSource;
- (void)_updateDataSource;
- (void)requestTitleAndSubtitleForModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateModels;
- (id)_modelElements;
- (id)providerSource;
- (id)titleForModel:(id)arg1;
- (id)subtitleForModel:(id)arg1;

@end
