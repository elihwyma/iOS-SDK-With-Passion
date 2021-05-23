/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADFill.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill

{
    OADColor *mColor;
    _Bool mIsColorOverridden;
}

+ (id)defaultProperties;
+ (id)blackFill;
+ (id)whiteFill;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)initWithDefaults;
- (_Bool)isColorOverridden;
- (void)setStyleColor:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)usesPlaceholderColor;

@end
