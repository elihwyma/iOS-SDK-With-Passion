/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShade.h>

__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade

{
    float mAngle;
    _Bool mIsAngleOverridden;
    _Bool mScaled;
    _Bool mIsScaledOverridden;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (_Bool)scaled;
- (void)setScaled:(_Bool)arg1;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isAngleOverridden;
- (_Bool)isScaledOverridden;

@end
