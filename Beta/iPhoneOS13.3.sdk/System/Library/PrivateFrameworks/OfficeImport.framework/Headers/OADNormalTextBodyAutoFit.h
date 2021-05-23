/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextBodyAutoFit.h>

__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit

{
    float mFontScalePercent;
    float mLineSpacingReductionPercent;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFontScalePercent:(float)arg1 lineSpacingReductionPercent:(float)arg2;
- (float)fontScalePercent;
- (float)lineSpacingReductionPercent;

@end
