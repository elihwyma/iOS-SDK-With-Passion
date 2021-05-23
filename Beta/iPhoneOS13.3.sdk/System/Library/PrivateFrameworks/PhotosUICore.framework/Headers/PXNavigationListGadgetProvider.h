/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSString, PXExtendedTraitCollection, PXNavigationListDataSectionManager;

@interface PXNavigationListGadgetProvider : PXGadgetProvider

{
    _Bool _shouldShowNavigationListOnIpad;
    _Bool _isPresentedInPicker;
    unsigned long long _type;
    PXExtendedTraitCollection *_traitCollection;
    PXNavigationListDataSectionManager *_dataSourceManager;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager;
@property (nonatomic, readonly) _Bool isPresentedInPicker;
@property (nonatomic, readonly) _Bool shouldShowNavigationListForDeviceAndLayoutClass;
@property (nonatomic) _Bool shouldShowNavigationListOnIpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)loadDataForGadgets;
- (void)startLoadingRemainingData;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (void)_updateGadgets;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(_Bool)arg3;
- (void)_initializeDataSourceManagerIfNeeded;

@end
