/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PSRootController, PSSpecifier;

@protocol PSController;

@interface PUStorageManagementBaseController : UIViewController

{
    PSSpecifier *_specifier;
    id _preferenceValue;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifier;
- (void)suspend;
- (void)handleURL:(id)arg1;
- (void)viewDidLoad;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didReceiveMemoryWarning;
- (void)setSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)setRootController:(id)arg1;
- (id)rootController;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)statusBarWillAnimateByHeight:(double)arg1;

@end
