/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

#import <HealthUI/Swift-Protocol.h>

@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <Swift>

{
    HKSample *_sample;
    HKUnitPreferenceController *_unitPreferenceController;
}

- (id)initWithSample:(id)arg1 unitPreferenceController:(id)arg2;
- (void)addDetailValuesToSection:(id)arg1;
- (id)_mediaSourceDisplayNamesForSample:(id)arg1;

@end
