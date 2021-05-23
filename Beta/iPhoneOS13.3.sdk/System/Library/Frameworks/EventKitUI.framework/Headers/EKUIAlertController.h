/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIAlertController.h>

@interface EKUIAlertController : UIAlertController

{
    _Bool _prohibitsRotation;
}

@property (nonatomic) _Bool prohibitsRotation;

- (_Bool)shouldAutorotate;

@end
