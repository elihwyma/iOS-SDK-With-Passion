/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADPattern.h>

__attribute__((visibility("hidden")))
@interface OADPresetPattern : OADPattern

{
    int mType;
    _Bool mIsTypeOverridden;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)namedBitmapDataForPresetPatternType:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (_Bool)isTypeOverridden;

@end
