/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPEffect.h>

__attribute__((visibility("hidden")))
@interface MFPColorMatrixEffect : MFPEffect

{
    float mColorMatrix[5][5];
}

+ (id)GUID;

- (id)initWithColorMatrix:(float [5][5])arg1;

@end
