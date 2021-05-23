/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface MTUIBitmapHandView : UIView

{
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint)arg2 maintainsOrientation:(_Bool)arg3;
+ (id)partInfoWithName:(id)arg1;

- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint)arg4;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint)arg2;

@end
