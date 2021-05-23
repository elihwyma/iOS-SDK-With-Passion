/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface ARPresentationThermalPolicyManager : NSObject

{
    NSDictionary *_thermalPolicyMap;
}

@property (retain, nonatomic) NSDictionary *thermalPolicyMap;

+ (id)sharedInstance;
+ (_Bool)thermalMitigationEnabled;
+ (double)minimumThermalHysterisWindow;

- (id)init;
- (id)policyForCondition:(id)arg1 andTechniques:(id)arg2;
- (id)_generateThermalPolicyMap;
- (_Bool)_containsTrackingTechnique:(Class)arg1 inTechniques:(id)arg2;
- (long long)_minCameraFPSForImageTrackingInDeviceCondition:(id)arg1;
- (long long)_cameraFPSFactoringInTechniques:(id)arg1 condition:(id)arg2;
- (long long)_cameraFPSOverride;
- (id)_policyForCondition:(id)arg1;
- (void)_updateBackCameraConfigIfNeeded:(id)arg1 techniques:(id)arg2 condition:(id)arg3;

@end
