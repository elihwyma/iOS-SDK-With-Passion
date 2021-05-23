/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIView;

@protocol PMEditorPlayerViewDelegate, PMEditorToolbarOwner;

@interface PMEditorBasePlayerViewController : UIViewController

{
    id <PMEditorPlayerViewDelegate> _playerViewDelegate;
    id <PMEditorToolbarOwner> _toolbarOwner;
    UIView *_playerContainerView;
    UIView *_tableHeaderWithSpaceView;
    UIView *_snapshotView;
    NSLayoutConstraint *_playerContainerHeightConstraint;
    NSLayoutConstraint *_playerContainerWidthConstraint;
    NSLayoutConstraint *_tableHeaderHeightConstraint;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *playerContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *tableHeaderHeightConstraint;
@property (weak, nonatomic) id <PMEditorPlayerViewDelegate> playerViewDelegate;
@property (weak, nonatomic) id <PMEditorToolbarOwner> toolbarOwner;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *tableHeaderWithSpaceView;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (double)heightForPlayerView;

@end
