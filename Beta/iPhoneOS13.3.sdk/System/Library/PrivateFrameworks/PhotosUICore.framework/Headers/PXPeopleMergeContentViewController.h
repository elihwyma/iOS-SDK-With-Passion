/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UIViewController

{
    id <PXPerson> _targetPerson;
    id <PXPerson> _draggedPerson;
}

@property (retain, nonatomic) id <PXPerson> targetPerson;
@property (retain, nonatomic) id <PXPerson> draggedPerson;

- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithTargetPerson:(id)arg1 draggedPerson:(id)arg2;

@end
