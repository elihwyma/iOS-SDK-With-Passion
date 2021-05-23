/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBlipEffect.h>

__attribute__((visibility("hidden")))
@interface OADBiLevelEffect : OADBlipEffect

{
    float mThreshold;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)threshold;
- (void)setThreshold:(float)arg1;

@end
