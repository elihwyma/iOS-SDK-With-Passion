/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

#import <AVKit/Swift-Protocol.h>

@class AVAssetImageGenerator, AVEditBehavior, AVEditBehaviorParameters, AVEditView, AVObservationController, AVPlayerController, AVPlayerViewController, AVZoomingBehavior, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIToolbar, UIView;

@interface AVEditBehaviorContext : NSObject <Swift>

{
    _Bool _editing;
    AVPlayerViewController *_playerViewController;
    AVEditBehavior *_behavior;
    AVEditBehaviorParameters *_parameters;
    AVZoomingBehavior *_zoomingBehavior;
    AVObservationController *_observationController;
    AVEditView *_editView;
    AVAssetImageGenerator *_imageGenerator;
    AVPlayerController *_playerController;
    id _playerTimeObserver;
    UIView *_containerView;
    UIToolbar *_toolbar;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_pauseButton;
    NSMutableArray *_pendingImageRequests;
    NSMutableDictionary *_requestedImageTimeToCMTimeMap;
    unsigned long long _currentRotation;
    struct CGAffineTransform _rotationTransform;
}

@property (weak, nonatomic) AVEditBehavior *behavior;
@property (retain, nonatomic) AVZoomingBehavior *zoomingBehavior;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVEditView *editView;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) id playerTimeObserver;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem;
@property (retain, nonatomic) UIBarButtonItem *playButton;
@property (retain, nonatomic) UIBarButtonItem *pauseButton;
@property (nonatomic, readonly) NSMutableArray *pendingImageRequests;
@property (nonatomic, readonly) NSMutableDictionary *requestedImageTimeToCMTimeMap;
@property (nonatomic) unsigned long long currentRotation;
@property (nonatomic) struct CGAffineTransform rotationTransform;
@property (copy, nonatomic, readonly) AVEditBehaviorParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) AVPlayerViewController *playerViewController;

- (void)dealloc;
- (void)endEditing;
- (void)done:(id)arg1;
- (void)play:(id)arg1;
- (void)pause:(id)arg1;
- (void)rotateClockwise;
- (void)cancel:(id)arg1;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withCoordinator:(id)arg2;
- (id)initWithAVKitOwner:(id)arg1;
- (void)willAddBehavior:(id)arg1;
- (void)didAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (void)editViewDidBeginScrubbing:(id)arg1;
- (void)editViewDidEndScrubbing:(id)arg1;
- (void)editView:(id)arg1 currentTimeDidChange:(double)arg2;
- (void)editView:(id)arg1 trimStartTimeDidChange:(double)arg2;
- (void)editView:(id)arg1 trimEndTimeDidChange:(double)arg2;
- (void)editViewWillBeginRequestingThumbnails:(id)arg1;
- (void)editViewDidFinishRequestingThumbnails:(id)arg1;
- (double)editViewDuration:(id)arg1;
- (double)editViewThumbnailAspectRatio:(id)arg1;
- (void)editView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)startEditing;
- (id)videoCompostitionRotatingAsset:(id)arg1;
- (void)_generateThumbnails;
- (id)_makeBarButtonItems;

@end
