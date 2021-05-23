/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class PXCMMSession;

@interface PXCMMComponentViewController : UIViewController

{
    PXCMMSession *_session;
}

@property (nonatomic, readonly) PXCMMSession *session;

- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;

@end
