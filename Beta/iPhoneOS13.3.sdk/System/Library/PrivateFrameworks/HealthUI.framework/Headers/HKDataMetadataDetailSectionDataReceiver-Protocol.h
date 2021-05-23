/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/Swift-Protocol.h>

@class HKDisplayTypeController, HKUnitPreferenceController;

@protocol HKDataMetadataDetailSectionDataReceiver <Swift>

@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;

@end
