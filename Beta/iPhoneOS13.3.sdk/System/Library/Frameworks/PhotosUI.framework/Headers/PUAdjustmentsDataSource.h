/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PICompositionController, PUAutoAdjustmentController, PUPhotoEditValuesCalculator;

@protocol PUAdjustmentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsDataSource : NSObject

{
    NSMutableArray *_adjustmentInfoSections;
    id <PUAdjustmentsDataSourceDelegate> _delegate;
    PICompositionController *_compositionController;
    PUAutoAdjustmentController *_autoEnhanceController;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    unsigned long long _assetType;
}

@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) PUAutoAdjustmentController *autoEnhanceController;
@property (retain, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator;
@property (nonatomic) unsigned long long assetType;
@property (weak, nonatomic) id <PUAdjustmentsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)renderer;
- (void)_resetEnabledStateForAutoEnhancedInfos;
- (void)_modifyAdjustmentForInfo:(id)arg1;
- (_Bool)canModifyAdjustmentAtIndexPath:(id)arg1;
- (void)setAdjustmentEnabled:(_Bool)arg1 atIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;
- (id)infoForItemAtIndexPath:(id)arg1;
- (void)resetInfoAtIndexPath:(id)arg1;
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4;
- (void)_setDefaultsForInfo:(id)arg1;
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;
- (void)_createAdjustmentInfos;
- (id)_autoEnhanceAdjustmentInfo;
- (id)_lightAdjustmentInfos;
- (id)_colorAdjustmentInfos;
- (id)_detailAdjustmentInfos;
- (id)_vignetteAdjustmentInfos;
- (void)_enableNonAutoAjustments:(_Bool)arg1;
- (void)_updateAdjustmentInfos;
- (void)compositionControllerDidChange;

@end
