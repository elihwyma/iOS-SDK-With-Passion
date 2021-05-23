/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectImpl : NSObject

+ (id)implementationFromCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (void)setEffect:(id)arg1;
- (_Bool)invertAutomaticStyle;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (void)appendDescriptionTo:(id)arg1;
- (id)implementationReplacingTintColor:(id)arg1;
- (long long)vibrancyStyle;

@end
