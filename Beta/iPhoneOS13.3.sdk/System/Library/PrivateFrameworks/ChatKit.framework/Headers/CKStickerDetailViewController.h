/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKStickerDetailNavigationBar, NSArray, NSString, UIButton, UITableView, UIVisualEffectView;

@protocol CKStickerDetailViewControllerDelegate;

@interface CKStickerDetailViewController : UIViewController <Swift>

{
    id <CKStickerDetailViewControllerDelegate> _delegate;
    NSArray *_chatItems;
    UITableView *_tableView;
    CKStickerDetailNavigationBar *_navigationBar;
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) NSArray *chatItems;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CKStickerDetailNavigationBar *navigationBar;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id <CKStickerDetailViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldAutorotate;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)initWithStickerChatItems:(id)arg1;
- (_Bool)wantsWindowedPresentation;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)constrainToPresentingVCBounds;
- (void)_viewButtonTapped:(id)arg1;

@end
