/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout

{
    double mStartClipT;
    double mEndClipT;
}

- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (id)quadraticCurve:(struct CGPoint [3])arg1;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;

@end
