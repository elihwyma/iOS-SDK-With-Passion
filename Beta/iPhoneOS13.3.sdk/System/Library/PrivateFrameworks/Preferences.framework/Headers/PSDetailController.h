/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSEditingPane;

@interface PSDetailController

{
    PSEditingPane *_pane;
}

@property (weak, nonatomic) PSEditingPane *pane;

- (void)dealloc;
- (void)suspend;
- (id)title;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (struct CGRect)paneFrame;
- (void)loadPane;
- (void)saveChanges;

@end
