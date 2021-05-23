/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SystemProperties : NSObject

{
    int _dualSIMCapability;
    _Bool _internalBuild;
    _Bool _seedBuild;
    _Bool _carrierBuild;
    _Bool _dualSIMCapable;
    _Bool _dualSIMEnabled;
    _Bool _basebandCapability;
    _Bool _internalBuildDisabledByOverride;
    int _deviceClass;
    NSString *_buildVariant;
    NSString *_productType;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_buildVersionPrefix;
    NSString *_buildPlatform;
    NSString *_basebandChipset;
    NSNumber *_carrierSeedBuildOverride;
    NSNumber *_seedBuildOverride;
}

@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) NSString *deviceClassString;
@property (nonatomic, readonly) _Bool basebandCapability;
@property (nonatomic, readonly) _Bool dualSIMCapable;
@property (nonatomic, readonly) _Bool dualSIMEnabled;
@property (nonatomic, readonly) _Bool internalBuild;
@property (nonatomic, readonly) _Bool seedBuild;
@property (nonatomic, readonly) _Bool carrierBuild;
@property (nonatomic, readonly) _Bool customerSeedBuild;
@property (nonatomic, readonly) _Bool carrierSeedBuild;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSString *buildVersionPrefix;
@property (nonatomic, readonly) NSString *buildPlatform;
@property (nonatomic, readonly) NSString *buildVariant;
@property (nonatomic, readonly) NSString *basebandChipset;
@property (nonatomic) _Bool internalBuildDisabledByOverride;
@property (retain, nonatomic) NSNumber *carrierSeedBuildOverride;
@property (retain, nonatomic) NSNumber *seedBuildOverride;

+ (id)sharedInstance;
+ (int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg1;
+ (void)saveDeviceConfigType:(unsigned long long)arg1 forKey:(struct __CFString *)arg2;
+ (unsigned long long)retrieveDeviceConfigTypeForKey:(struct __CFString *)arg1;

- (id)init;
- (id)description;
- (void)getDualSIMCapability;

@end
