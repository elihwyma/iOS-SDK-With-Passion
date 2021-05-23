/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect : OADBlipEffect

{
    OADColor *mColor1;
    OADColor *mColor2;
    int mTransferMode1;
    int mTransferMode2;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)color1;
- (void)setColor1:(id)arg1;
- (void)setColor2:(id)arg1;
- (id)color2;
- (void)setTransferMode1:(int)arg1;
- (void)setTransferMode2:(int)arg1;
- (void)setStyleColor:(id)arg1;
- (int)transferMode1;
- (int)transferMode2;

@end
