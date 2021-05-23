/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPSharpenEffect : MFPEffect

{
    float mAmount;
    float mRadius;
}

+ (id)GUID;

- (id)initWithAmount:(float)arg1 radius:(float)arg2;

@end
