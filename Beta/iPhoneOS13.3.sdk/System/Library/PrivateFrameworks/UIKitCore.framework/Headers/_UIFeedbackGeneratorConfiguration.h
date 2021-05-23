/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSSet, NSString;

@interface _UIFeedbackGeneratorConfiguration : NSObject <Swift>

{
    _Bool _settingsEnabled;
    _Bool _setup;
    _Bool _enabled;
    NSSet *_usedFeedbacks;
    CDUnknownBlockType _preparationBlock;
    Class _clientClass;
    NSString *_usage;
    long long _requiredSupportLevel;
    long long _activationStyle;
    long long _outputMode;
    NSString *__stats_key;
}

@property (copy, nonatomic) CDUnknownBlockType preparationBlock;
@property (copy, nonatomic) Class clientClass;
@property (copy, nonatomic) NSString *usage;
@property (nonatomic) long long requiredSupportLevel;
@property (nonatomic) long long activationStyle;
@property (nonatomic) long long outputMode;
@property (nonatomic, readonly) _Bool defaultEnabled;
@property (nonatomic) _Bool settingsEnabled;
@property (nonatomic, getter=isSetup) _Bool setup;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) NSArray *feedbackKeyPaths;
@property (nonatomic, readonly) NSSet *usedFeedbacks;
@property (nonatomic, readonly) NSString *descriptionKey;
@property (copy, nonatomic) NSString *_stats_key;

+ (id)defaultConfiguration;
+ (id)_configurationWithKey:(id)arg1 preparationBlock:(CDUnknownBlockType)arg2;
+ (id)_configurationWithKey:(id)arg1 requiredSupportLevel:(long long)arg2 preparationBlock:(CDUnknownBlockType)arg3;
+ (id)_disabledConfiguration;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tweakedConfigurationForClass:(Class)arg1 usage:(id)arg2;
- (_Bool)_setupIfNecessary;
- (id)_updateFeedbackForOutputMode:(id)arg1;
- (id)_updateFeedbacksForOutputMode:(id)arg1;
- (void)_preferencesUpdated:(id)arg1;
- (void)_updateEnabled;
- (_Bool)_shouldEnable;
- (id)tweakedConfigurationForCaller:(id)arg1 usage:(id)arg2;

@end
