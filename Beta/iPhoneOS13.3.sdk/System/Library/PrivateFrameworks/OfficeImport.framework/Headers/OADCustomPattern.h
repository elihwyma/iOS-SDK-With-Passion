/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADCustomPattern : OADPattern

{
    OADBlipRef *mBlipRef;
    _Bool mIsBlipRefOverridden;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaults;
- (_Bool)isBlipRefOverridden;
- (id)blipRef;
- (void)setBlipRef:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;

@end
