/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIActivityViewController.h>

@class NSString, PMAirplayActivity, UIBarButtonItem, UIViewController;

@protocol PMActivityViewControllerDelegate;

@interface PMActivityViewController : UIActivityViewController

{
    UIViewController *_presenter;
    id <PMActivityViewControllerDelegate> _delegate;
    PMAirplayActivity *_airplayActivity;
    unsigned long long _backgroundTask;
    UIBarButtonItem *_doneButton;
}

@property (retain, nonatomic) PMAirplayActivity *airplayActivity;
@property (nonatomic) unsigned long long backgroundTask;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) id <PMActivityViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *presenter;

- (void)cancel;
- (void)viewWillLayoutSubviews;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (id)_customizationGroupsForActivityViewController:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (void)exportFailed;
- (void)updateVisibleShareActions;
- (void)exportWillBegin;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4;

@end
