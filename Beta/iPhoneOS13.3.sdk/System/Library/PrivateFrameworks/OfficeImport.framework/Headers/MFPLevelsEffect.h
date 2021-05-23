/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPLevelsEffect : MFPEffect

{
    int mHighlight;
    int mMidtone;
    int mShadow;
}

+ (id)GUID;

- (id)initWithHighlight:(int)arg1 midtone:(int)arg2 shadow:(int)arg3;

@end
