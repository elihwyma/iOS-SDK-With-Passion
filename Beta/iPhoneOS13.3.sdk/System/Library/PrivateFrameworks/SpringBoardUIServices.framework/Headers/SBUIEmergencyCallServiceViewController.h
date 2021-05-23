/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class UIColor;

@interface SBUIEmergencyCallServiceViewController : UIViewController

{
    long long _backgroundStyle;
    UIColor *_tintColor;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIColor *tintColor;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)backgroundStyle:(CDUnknownBlockType)arg1;
- (void)noteTintColorForBackgroundStyleChanged:(id)arg1;
- (void)noteViewMovedOffscreenTemporarily;

@end
