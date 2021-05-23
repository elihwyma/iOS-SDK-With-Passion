/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDDataValueProperties.h>

__attribute__((visibility("hidden")))
@interface CHDPieDataValueProperties : CHDDataValueProperties

{
    int mExplosion;
    _Bool mIsExplosionSet;
}

- (id)init;
- (int)explosion;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;
- (void)setExplosion:(int)arg1;
- (_Bool)isExplosionSet;

@end
