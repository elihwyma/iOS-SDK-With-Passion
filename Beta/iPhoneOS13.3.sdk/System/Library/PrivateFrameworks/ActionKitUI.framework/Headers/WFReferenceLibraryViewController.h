/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController

{
    id <WFReferenceLibraryViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <WFReferenceLibraryViewControllerDelegate> delegate;

- (void)viewWillDisappear:(_Bool)arg1;

@end
