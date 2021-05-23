/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UIView;

@protocol PXTranscriptBubbleDelegate;

@interface PXTranscriptBubbleViewController : UIViewController

{
    _Bool _transitionInProgress;
    struct CGSize _lastRequestedSize;
    long long _lastResizeRequestID;
    _Bool _isReadyForDisplay;
    id <PXTranscriptBubbleDelegate> _delegate;
    UIView *_contentView;
    UIView *_targetContentView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *targetContentView;
@property (weak, nonatomic) id <PXTranscriptBubbleDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (struct CGSize)contentSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_contentViewSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)workaroundSizeForSize:(struct CGSize)arg1;
- (_Bool)_requiresResizeForCurrentSize:(struct CGSize)arg1;
- (void)transitionToContentView:(id)arg1;
- (void)_scheduleContentViewUpdate;
- (void)_resizeTimeoutForRequestID:(long long)arg1;
- (void)_switchToPendingTargetViewIfNecessary;

@end
