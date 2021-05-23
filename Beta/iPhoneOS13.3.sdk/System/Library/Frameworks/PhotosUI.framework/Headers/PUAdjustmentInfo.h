/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PUAdjustmentCustomBehavior;

__attribute__((visibility("hidden")))
@interface PUAdjustmentInfo : NSObject

{
    _Bool _enabled;
    NSString *_localizedName;
    NSString *_localizedSectionName;
    NSString *_iconName;
    double _defaultLevel;
    double _identityLevel;
    double _minimumLevel;
    double _maximumLevel;
    double _baseLevel;
    double _currentLevel;
    double _lastAdjustedLevel;
    NSString *_identifier;
    NSString *_adjustmentKey;
    NSString *_settingKey;
    id <PUAdjustmentCustomBehavior> _customSettingDelegate;
    NSString *_attributeKey;
}

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localizedSectionName;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) _Bool enabled;
@property (nonatomic) double defaultLevel;
@property (nonatomic) double identityLevel;
@property (nonatomic) double minimumLevel;
@property (nonatomic) double maximumLevel;
@property (nonatomic) double baseLevel;
@property (nonatomic) double currentLevel;
@property (nonatomic) double lastAdjustedLevel;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adjustmentKey;
@property (retain, nonatomic) NSString *settingKey;
@property (retain, nonatomic) NSString *attributeKey;
@property (retain, nonatomic) id <PUAdjustmentCustomBehavior> customSettingDelegate;
@property (nonatomic, readonly) double normalizedCurrentLevel;
@property (nonatomic, readonly) double normalizedDefaultLevel;

- (id)description;
- (id)copy;

@end
