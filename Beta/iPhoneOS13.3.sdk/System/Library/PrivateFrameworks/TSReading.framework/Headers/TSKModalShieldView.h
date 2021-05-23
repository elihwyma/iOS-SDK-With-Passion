/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@protocol TSKModalShieldDelegate;

@interface TSKModalShieldView : UIView

{
    id <TSKModalShieldDelegate> mDelegate;
}

@property (nonatomic) id <TSKModalShieldDelegate> delegate;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
