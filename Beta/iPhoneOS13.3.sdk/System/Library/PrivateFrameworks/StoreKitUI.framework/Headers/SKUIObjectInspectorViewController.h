/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView, UIVisualEffectView, _SKUIInspectablePropertySection;

@protocol SKUIInspectableObject;

__attribute__((visibility("hidden")))
@interface SKUIObjectInspectorViewController : UIViewController

{
    id <SKUIInspectableObject> _inspectableObject;
    UIView *_contentView;
    UIVisualEffectView *_backgroundView;
    UINavigationBar *_navigationBar;
    UITableView *_tableView;
    _SKUIInspectablePropertySection *_currentSection;
    NSMutableArray *_sections;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id <SKUIInspectableObject> inspectableObject;
@property (retain, nonatomic) _SKUIInspectablePropertySection *currentSection;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *information;

+ (void)showInspectableObject:(id)arg1;

- (void)dismiss;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)setupConstraints;
- (void)beginSectionWithFriendlyName:(id)arg1;
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;
- (void)endSection;
- (id)initWithInspectableObject:(id)arg1;
- (void)showFromViewController:(id)arg1;
- (void)handleBackgroundTap:(id)arg1;
- (void)populate;
- (struct CGRect)calculateContentViewFrameWithParentBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;

@end
