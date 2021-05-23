/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade

{
    OADRelativeRect *mFillToRect;
    int mType;
    _Bool mIsTypeOverridden;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithDefaults;
- (id)fillToRect;
- (void)setFillToRect:(id)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isFillToRectOverridden;
- (_Bool)isTypeOverridden;

@end
