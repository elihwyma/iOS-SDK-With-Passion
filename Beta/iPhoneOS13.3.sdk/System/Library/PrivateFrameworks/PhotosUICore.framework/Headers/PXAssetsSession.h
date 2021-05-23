/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXSectionedDataSource, PXSectionedDataSourceManager, PXSectionedSelectionManager, PXSelectionSnapshot, PXUIMediaProvider;

@interface PXAssetsSession : PXObservable <Swift>

{
    PXSectionedDataSource *_dataSource;
    PXSelectionSnapshot *_selectionSnapshot;
    PXSectionedDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXSectionedSelectionManager *_selectionManager;
}

@property (retain, nonatomic) PXSectionedDataSource *dataSource;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3;
- (void)_updateDataSourceDependentProperties;

@end
