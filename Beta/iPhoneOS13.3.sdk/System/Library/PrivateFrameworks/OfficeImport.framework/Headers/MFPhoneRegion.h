/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion

{
    OITSUBezierPath *m_path;
    struct CGRect m_bounds;
}

- (int)invert:(id)arg1;
- (id)initWithRects:(id)arg1 in_bounds:(struct CGRect)arg2 in_dc:(id)arg3;
- (id)initWithPath:(id)arg1 in_bounds:(struct CGRect)arg2;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (int)fill:(id)arg1 in_brush:(id)arg2;
- (int)frame:(id)arg1 in_brush:(id)arg2;

@end
