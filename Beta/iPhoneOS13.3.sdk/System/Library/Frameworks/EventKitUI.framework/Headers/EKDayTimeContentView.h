/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class EKDayTimeView;

@interface EKDayTimeContentView : UIView

{
    EKDayTimeView *_owner;
    struct _NSRange _hourRange;
}

@property (nonatomic) EKDayTimeView *owner;
@property (nonatomic) struct _NSRange hourRange;

- (void)drawRect:(struct CGRect)arg1;

@end
