/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADAdjustedColor : OADColor

{
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    _Bool mInvert;
    _Bool mInvert128;
    _Bool mGray;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)invert;
- (int)adjustmentType;
- (id)baseColor;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(_Bool)arg4 invert128:(_Bool)arg5 gray:(_Bool)arg6;
- (_Bool)gray;
- (unsigned char)adjustmentParam;
- (_Bool)invert128;

@end
