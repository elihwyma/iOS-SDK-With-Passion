/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDash.h>

__attribute__((visibility("hidden")))
@interface OADPresetDash : OADDash

{
    BOOL mType;
    unsigned int mIsTypeOverridden:1;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)type;
- (void)setType:(BOOL)arg1;
- (id)initWithDefaults;
- (id)equivalentCustomDash;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (_Bool)isTypeOverridden;

@end
