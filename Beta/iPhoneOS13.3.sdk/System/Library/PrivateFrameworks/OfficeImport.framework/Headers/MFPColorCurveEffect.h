/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPColorCurveEffect : MFPEffect

{
    int mAdjustment;
    int mChannel;
    int mAdjustValue;
}

+ (id)GUID;

- (id)initWithAdjustment:(int)arg1 channel:(int)arg2 adjustValue:(int)arg3;

@end
