/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTEffect, NSString;

@interface CFXEffect : NSObject

{
    NSString *_identifier;
    NSString *_localizedTitle;
    JTEffect *_jtEffect;
}

@property (nonatomic, readonly) _Bool isNone;
@property (retain, nonatomic) JTEffect *jtEffect;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *localizedTitle;

+ (void)initEffectRegistry;
+ (void)preWarmShaderCache;
+ (id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2;
+ (id)effectWithJTEffect:(id)arg1;
+ (id)effectIdentifiersForEffectType:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJTEffect:(id)arg1;

@end
