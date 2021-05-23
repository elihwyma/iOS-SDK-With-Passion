/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

__attribute__((visibility("hidden")))
@interface OADPatternFill : OADFill

{
    OADColor *mFgColor;
    OADColor *mBgColor;
    OADPattern *mPattern;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setParent:(id)arg1;
- (id)pattern;
- (void)setColor:(id)arg1;
- (id)initWithDefaults;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (void)setPattern:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isFgColorOverridden;
- (_Bool)isBgColorOverridden;
- (_Bool)isPatternOverridden;
- (id)namedImageDataWithBlipCollection:(id)arg1;

@end
