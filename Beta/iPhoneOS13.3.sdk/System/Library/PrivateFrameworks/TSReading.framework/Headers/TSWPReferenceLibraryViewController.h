/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

{
    id <TSWPReferenceLibraryViewControllerDelegate> _delegate;
}

@property (nonatomic) id <TSWPReferenceLibraryViewControllerDelegate> delegate;

- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;

@end
