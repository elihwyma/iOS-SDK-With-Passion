/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPen.h>

__attribute__((visibility("hidden")))
@interface MFPhonePen : MFPen

{
    float m_PixelSize;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4 LPToDPTransform:(struct CGAffineTransform)arg5;

- (void)strokePath:(id)arg1 in_path:(id)arg2;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
- (void)applyDashedLinesToPath:(id)arg1;
- (void)applyLineCapStyleToPath:(id)arg1;
- (void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2;

@end
