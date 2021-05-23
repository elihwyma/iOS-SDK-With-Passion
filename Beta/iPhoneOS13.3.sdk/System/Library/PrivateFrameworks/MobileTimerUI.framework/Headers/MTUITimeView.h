/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UILabel.h>

@interface MTUITimeView : UILabel

{
    double _time;
}

@property (nonatomic) double time;

- (void)handleLocaleChange;

@end
