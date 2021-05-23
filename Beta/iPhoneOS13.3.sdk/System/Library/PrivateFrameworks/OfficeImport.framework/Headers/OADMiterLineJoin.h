/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADLineJoin.h>

__attribute__((visibility("hidden")))
@interface OADMiterLineJoin : OADLineJoin

{
    float mLimit;
    unsigned int mIsLimitOverridden:1;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)limit;
- (void)setLimit:(float)arg1;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isLimitOverridden;

@end
