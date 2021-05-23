/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UITableView, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuViewController : UIViewController <Swift>

{
    NSArray *_allSettings;
    UITableView *_tableView;
    NSString *_domain;
    _UIContentUnavailableView *_noContentView;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSArray *allSettings;
@property (retain, nonatomic) _UIContentUnavailableView *noContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reloadSettings:(id)arg1;
- (void)_resetSettings:(id)arg1;

@end
