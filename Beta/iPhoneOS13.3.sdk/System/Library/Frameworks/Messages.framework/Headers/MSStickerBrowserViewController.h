/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <UIKit/UIViewController.h>

@class MSStickerBrowserView, NSString;

@interface MSStickerBrowserViewController : UIViewController

{
    _Bool _viewHasAppeared;
    MSStickerBrowserView *_stickerBrowserView;
    long long _stickerSize;
    struct CGRect _initialFrameBeforeAppearance;
}

@property (retain, nonatomic) MSStickerBrowserView *stickerBrowserView;
@property (nonatomic) _Bool viewHasAppeared;
@property (nonatomic, readonly) long long stickerSize;
@property (nonatomic) struct CGRect initialFrameBeforeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (void)updateSnapshotWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)didTransitionToPresentationStyle:(unsigned long long)arg1;
- (id)initWithStickerSize:(long long)arg1;
- (void)enableUserInteraction;
- (void)disableUserInteraction;

@end
