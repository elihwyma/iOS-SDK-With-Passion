/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PMTitleEditorProvider, UITableView, UITableViewCell;

@protocol TitleChangeInformable;

@interface PMEditorTitleViewController : UIViewController

{
    _Bool _sizeIsTransitioning;
    PMTitleEditorProvider *_titleProvider;
    id <TitleChangeInformable> _titleChangeInformableDelegate;
    UITableView *_tableView;
    UITableViewCell *_collectionViewControllerCell;
    long long _activeCellIndex;
    NSString *_activeCellText;
}

@property (retain, nonatomic) UITableViewCell *collectionViewControllerCell;
@property (nonatomic) long long activeCellIndex;
@property (retain, nonatomic) NSString *activeCellText;
@property (nonatomic) _Bool sizeIsTransitioning;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider;
@property (weak, nonatomic) id <TitleChangeInformable> titleChangeInformableDelegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)textDidChange:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)updateFonts;

@end
