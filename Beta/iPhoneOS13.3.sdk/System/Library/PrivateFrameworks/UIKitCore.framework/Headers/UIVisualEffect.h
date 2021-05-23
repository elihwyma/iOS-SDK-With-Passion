/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <Swift>

@property (nonatomic, readonly) _UIBackdropViewSettings *effectSettings;
@property (nonatomic, readonly) _Bool _isATVStyle;
@property (nonatomic, readonly) _Bool _isAutomaticStyle;
@property (nonatomic, readonly) _UIVisualEffectConfig *effectConfig;

+ (_Bool)supportsSecureCoding;
+ (id)emptyEffect;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCombiningEffects:(id)arg1;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCompositingColor:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (long long)_expectedUsage;
- (id)effectConfigForQuality:(long long)arg1;
- (_Bool)_selectorOverridden:(SEL)arg1;
- (id)_allEffects;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;

@end
