//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>

@class PXExtendedTraitCollection, PXNavigationListDataSectionManager;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver>
{
    BOOL _shouldShowNavigationListOnIpad;
    BOOL _isPresentedInPicker;
    NSUInteger _type;
    PXExtendedTraitCollection *_traitCollection;
    PXNavigationListDataSectionManager *_dataSourceManager;
}

@property(readonly, nonatomic) BOOL isPresentedInPicker; // @synthesize isPresentedInPicker=_isPresentedInPicker;
@property(retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(nonatomic) BOOL shouldShowNavigationListOnIpad; // @synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad;
// - (void).cxx_destruct;
- (void)_initializeDataSourceManagerIfNeeded;
@property(readonly, nonatomic) BOOL shouldShowNavigationListForDeviceAndLayoutClass;
- (void)_updateGadgets;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)startLoadingRemainingData;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (void)dealloc;
- (id)initWithType:(NSUInteger)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(BOOL)arg3;
- (id)init;

@end

