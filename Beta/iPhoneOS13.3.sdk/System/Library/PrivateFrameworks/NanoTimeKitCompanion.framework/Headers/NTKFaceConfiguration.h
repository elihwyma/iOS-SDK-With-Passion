/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject

{
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editModeConfigurations;
    NSMutableDictionary *_metrics;
    _Bool _resourceDirectoryExists;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool resourceDirectoryExists;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metricForKey:(id)arg1;
- (id)validationString;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)complicationForSlot:(id)arg1;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (void)setMetric:(id)arg1 forKey:(id)arg2;
- (void)incrementMetricForKey:(id)arg1;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (void)setMetricsFromConfiguration:(id)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateComplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)_dateMetricsKeys;
- (void)_applyMetrics:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3;
- (void)_applyComplicationsDescription:(id)arg1;

@end
