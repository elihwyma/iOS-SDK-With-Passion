/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPTintEffect : MFPEffect

{
    int mHue;
    int mAmount;
}

+ (id)GUID;

- (id)initWithHue:(int)arg1 amount:(int)arg2;

@end
