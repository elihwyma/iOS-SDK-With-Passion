/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSString;

@interface _PXFeedbackFileRadarStepViewController : UIViewController

{
    NSString *_messageTitle;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonActionHandler;
}

@property (copy, nonatomic) NSString *messageTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) CDUnknownBlockType buttonActionHandler;

- (void)viewDidLoad;

@end
