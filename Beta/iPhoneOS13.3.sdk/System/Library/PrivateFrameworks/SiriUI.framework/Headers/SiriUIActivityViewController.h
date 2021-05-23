/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;

@interface SiriUIActivityViewController : UIActivityViewController

{
    id <SiriUIActivityViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriUIActivityViewControllerDelegate> delegate;

- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
