/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewController.h>

#import <Preferences/Swift-Protocol.h>

@class NSString, PSRootController, PSSpecifierController, UIViewController;

@protocol PSController;

@interface PSThirdPartyAppViewController : UITableViewController <Swift>

{
    UIViewController<PSController> *_parent;
    PSRootController *_root;
    PSSpecifierController *_specifierController;
}

@property (retain, nonatomic) UIViewController<PSController> *parent;
@property (retain, nonatomic) PSRootController *root;
@property (retain, nonatomic) PSSpecifierController *specifierController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)specifier;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
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
- (void)didReloadSpecifiers;

@end
