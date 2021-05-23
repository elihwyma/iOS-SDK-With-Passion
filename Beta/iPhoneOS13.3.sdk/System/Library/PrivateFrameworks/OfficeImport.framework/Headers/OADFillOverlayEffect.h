/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADEffect.h>

@class OADFill;

__attribute__((visibility("hidden")))
@interface OADFillOverlayEffect : OADEffect

{
    int mBlendMode;
    OADFill *mFill;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fill;
- (int)blendMode;
- (void)setBlendMode:(int)arg1;
- (void)setFill:(id)arg1;

@end
