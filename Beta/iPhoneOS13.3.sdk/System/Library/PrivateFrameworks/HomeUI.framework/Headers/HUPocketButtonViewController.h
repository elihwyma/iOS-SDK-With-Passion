/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class NSArray;

@interface HUPocketButtonViewController : UIViewController

{
    NSArray *_descriptors;
}

@property (copy, nonatomic, readonly) NSArray *descriptors;

+ (struct CGSize)calculatePreferredContentSizeForDescriptors:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithButtonDescriptors:(id)arg1;
- (void)_buttonHit:(id)arg1;

@end
