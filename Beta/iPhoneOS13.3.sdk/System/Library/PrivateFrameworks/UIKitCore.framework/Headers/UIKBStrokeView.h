/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBStrokeView : UIView

{
    NSMutableArray *_points;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addStrokePoint:(struct CGPoint)arg1 withTimestamp:(double)arg2;
- (void)resetStrokePoints;

@end
