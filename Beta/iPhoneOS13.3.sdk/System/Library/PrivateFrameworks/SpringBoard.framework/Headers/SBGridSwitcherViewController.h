/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherViewController.h>

@class NSString;

@interface SBGridSwitcherViewController : SBFluidSwitcherViewController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (void)_setupSpringLoadingSupport;

@end
