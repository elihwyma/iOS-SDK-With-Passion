/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class PKRulerLayer;

@interface PKRulerView : UIView

{
    _Bool _rulerHidden;
    PKRulerLayer *_rulerLayer;
}

@property (retain, nonatomic) PKRulerLayer *rulerLayer;
@property (nonatomic) _Bool rulerHidden;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
