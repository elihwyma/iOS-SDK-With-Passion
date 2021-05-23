/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class NSString, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfViewController : UIViewController

{
    _TVShelfViewController *_shelfViewController;
}

@property (retain, nonatomic) _TVShelfViewController *shelfViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;

@end
