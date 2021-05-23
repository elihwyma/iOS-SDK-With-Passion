/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADImageFillTechnique.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADStretchTechnique : OADImageFillTechnique

{
    OADRelativeRect *mFillRect;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (void)setFillRect:(id)arg1;
- (_Bool)isFillRectOverridden;
- (id)fillRect;

@end
