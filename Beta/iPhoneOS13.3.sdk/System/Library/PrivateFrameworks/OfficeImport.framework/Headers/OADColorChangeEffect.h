/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect : OADBlipEffect

{
    OADColor *mFromColor;
    OADColor *mToColor;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFromColor:(id)arg1;
- (void)setToColor:(id)arg1;
- (id)fromColor;
- (id)toColor;
- (void)setStyleColor:(id)arg1;

@end
