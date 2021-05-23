/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSimpleSection.h>

@class HKDataMetadataDataSource, HKDisplayTypeController, HKUnitPreferenceController, NSObject;

@protocol HKDataMetadataObject;

@interface HKDataMetadataDetailSection : HKDataMetadataSimpleSection

{
    HKDataMetadataDataSource *_metadataDataSource;
    NSObject<HKDataMetadataObject> *_object;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
}

@property (nonatomic, readonly) NSObject<HKDataMetadataObject> *object;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

- (id)initWithSample:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)initWithWorkoutEvent:(id)arg1;
- (void)_loadMetadataValues;

@end
