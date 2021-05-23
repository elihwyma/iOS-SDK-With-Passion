/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, PMActivityItemProvider, PMPosterViewController;

@interface PMShareOrientationSelectionViewController : UIViewController

{
    PMActivityItemProvider *_itemProvider;
    double _exportAspect;
    PMPosterViewController *_posterViewController;
    NSLayoutConstraint *_aspectRatioConstraint;
}

@property (retain, nonatomic) PMPosterViewController *posterViewController;
@property (retain, nonatomic) NSLayoutConstraint *aspectRatioConstraint;
@property (weak, nonatomic) PMActivityItemProvider *itemProvider;
@property (nonatomic) double exportAspect;

- (id)init;
- (void)viewDidLoad;
- (void)createConstraints;
- (double)upScalingFactor;
- (void)_updateSharingHeaderIcons;

@end
