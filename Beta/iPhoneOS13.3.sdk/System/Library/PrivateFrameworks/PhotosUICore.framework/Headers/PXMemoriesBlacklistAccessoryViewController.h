/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, PXMemoriesBlacklistAccessoryViewSpec, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController

{
    UIView *_accessoryView;
    PXMemoriesBlacklistAccessoryViewSpec *_viewSpec;
    NSArray *_constraints;
}

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)updateViewConstraints;
- (id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2;

@end
