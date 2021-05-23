/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <UIKit/UINavigationController.h>

@class NSString, SPUINavigationBar;

@interface SPUINavigationController : UINavigationController

@property (readonly) SPUINavigationBar *navigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)_canShowWhileLocked;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (long long)preferredUserInterfaceStyle;

@end
