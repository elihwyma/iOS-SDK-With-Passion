/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@interface UIView (PKAdditions)

- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect)PK_convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)PK_convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;

@end
