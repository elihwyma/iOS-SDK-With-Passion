/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TDDeviceTraits : NSObject

{
    double _scale;
    long long _idiomValue;
    NSArray *_hostedIdiomValues;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamutValue;
    long long _deploymentTargetValue;
    long long _memoryPerformanceClass;
    long long _graphicsPerformanceClass;
    long long _graphicsFeatureSetClassValue;
    NSArray *_graphicsFeatureSetFallbackValues;
    NSArray *_subtypeFallbackValues;
    long long _dynamicDisplayModeValue;
}

@property (nonatomic) long long idiomValue;
@property (copy, nonatomic) NSArray *hostedIdiomValues;
@property (nonatomic) long long graphicsFeatureSetClassValue;
@property (copy, nonatomic) NSArray *graphicsFeatureSetFallbackValues;
@property (nonatomic) long long displayGamutValue;
@property (nonatomic) long long deploymentTargetValue;
@property (nonatomic) long long dynamicDisplayModeValue;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *idiom;
@property (retain, nonatomic) NSArray *hostedIdioms;
@property (nonatomic) long long subtype;
@property (retain, nonatomic) NSString *displayGamut;
@property (retain, nonatomic) NSString *deploymentTarget;
@property (nonatomic) long long memoryPerformanceClass;
@property (nonatomic) long long graphicsPerformanceClass;
@property (retain, nonatomic) NSString *graphicsFeatureSetClass;
@property (retain, nonatomic) NSArray *graphicsFeatureSetFallbacks;
@property (retain, nonatomic) NSArray *subtypeFallbackValues;
@property (retain, nonatomic) NSString *dynamicDisplayMode;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_idiomFromTraitString:(id)arg1;
- (id)_idiomToTraitString:(long long)arg1;
- (long long)_graphicsFeatureSetClassFromTraitString:(id)arg1;
- (id)_graphicsFeatureSetClassToTraitString:(long long)arg1;
- (long long)_displayGamutFromTraitString:(id)arg1;
- (id)_displayGamutToTraitString:(long long)arg1;
- (long long)_deploymentTargetFromTraitString:(id)arg1;
- (id)_deploymentTargetToTraitString:(long long)arg1;
- (long long)_dynamicDisplayModeFromTraitString:(id)arg1;
- (id)_dynamicDisplayModeToTraitString:(long long)arg1;

@end
