/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhonePath : MFPath

{
    OITSUBezierPath *m_path;
    int m_state;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)state;
- (int)end;
- (_Bool)isOpen;
- (int)begin;
- (int)abort;
- (struct CGPoint)currentPoint;
- (int)flatten;
- (int)stroke:(id)arg1;
- (int)closeFigure;
- (int)widen:(id)arg1;
- (int)fill:(id)arg1;
- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (id)getBezierPath;

@end
