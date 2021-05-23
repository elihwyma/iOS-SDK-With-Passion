/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIViewController.h>

@class AVTAvatarRecordDataSource, AVTMultiAvatarController, AVTRecordView, AVTSingleAvatarController, AVTUIEnvironment, AVTView, AVTViewCarouselLayout, AVTViewSession, AVTViewSessionProvider, NSString, UIView;

@protocol AVTAvatarDisplayingController, AVTAvatarRecord, AVTDisplayingCarouselControllerDelegate, AVTPresenterDelegate, AVTRecordingCarouselControllerDelegate, AVTUILogger;

@interface AVTCarouselController : UIViewController

{
    _Bool _singleAvatarMode;
    id <AVTPresenterDelegate> presenterDelegate;
    id <AVTDisplayingCarouselControllerDelegate> displayingDelegate;
    id <AVTRecordingCarouselControllerDelegate> recordingDelegate;
    double _decelerationRate;
    AVTAvatarRecordDataSource *_dataSource;
    id <AVTUILogger> _logger;
    AVTUIEnvironment *_environment;
    id <AVTAvatarRecord> _currentAvatarRecord;
    UIView *_avtViewContainer;
    AVTViewSessionProvider *_avtViewSessionProvider;
    AVTViewSession *_avtViewSession;
    AVTMultiAvatarController *_multiAvatarController;
    AVTSingleAvatarController *_singleAvatarController;
    id <AVTAvatarDisplayingController> _avatarDisplayingController;
    AVTViewCarouselLayout *_avtViewLayout;
    long long _mode;
}

@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (retain, nonatomic) id <AVTAvatarRecord> currentAvatarRecord;
@property (retain, nonatomic) UIView *avtViewContainer;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (retain, nonatomic) AVTViewSession *avtViewSession;
@property (retain, nonatomic) AVTMultiAvatarController *multiAvatarController;
@property (retain, nonatomic) AVTSingleAvatarController *singleAvatarController;
@property (retain, nonatomic) id <AVTAvatarDisplayingController> avatarDisplayingController;
@property (retain, nonatomic) AVTViewCarouselLayout *avtViewLayout;
@property (nonatomic, readonly) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecord> focusedRecord;
@property (nonatomic) double decelerationRate;
@property (nonatomic) _Bool singleAvatarMode;
@property (nonatomic) _Bool allowsCreate;
@property (weak, nonatomic) id <AVTRecordingCarouselControllerDelegate> recordingDelegate;
@property (nonatomic, readonly) AVTRecordView *focusedRecordingView;
@property (weak, nonatomic) id <AVTDisplayingCarouselControllerDelegate> displayingDelegate;
@property (nonatomic, readonly) AVTView *focusedDisplayView;

+ (id)sessionProviderForMode:(long long)arg1 environment:(id)arg2;
+ (id)displayingCarouselForRecordDataSource:(id)arg1;
+ (id)recordingCarouselForRecordDataSource:(id)arg1;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2;
- (void)avatarActionsViewControllerDidFinish:(id)arg1;
- (void)wrapAndPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)displayingControllerWantsToPresentEditorForCreation:(id)arg1;
- (void)displayingController:(id)arg1 didChangeCurrentRecord:(id)arg2;
- (void)willBeginFocus:(id)arg1;
- (void)didBeginFocus:(id)arg1;
- (void)displayingController:(id)arg1 didMoveTowardRecord:(id)arg2 withFactor:(double)arg3;
- (void)willEndFocus:(id)arg1;
- (void)didEndFocus:(id)arg1;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)setAllowsCreate:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithMode:(long long)arg1 dataSource:(id)arg2;
- (id)initWithMode:(long long)arg1 sessionProvider:(id)arg2 dataSource:(id)arg3 environment:(id)arg4;
- (void)showSingleAvatarControllerAnimated:(_Bool)arg1;
- (void)showMultiAvatarControllerAnimated:(_Bool)arg1;
- (void)beginAVTViewSession;
- (void)setupAVTView:(id)arg1;
- (void)reloadDataCenteringToAvatarRecord:(id)arg1;
- (void)displayAvatarRecord:(id)arg1 animated:(_Bool)arg2;
- (void)setSingleAvatarMode:(_Bool)arg1 fillContainer:(_Bool)arg2 animated:(_Bool)arg3;
- (void)notifyDelegateDidFocusRecord:(id)arg1 avtView:(id)arg2;
- (void)notifyDelegateWillEndFocusOnRecord:(id)arg1 avtView:(id)arg2;
- (void)notifyDelegateDidUpdateWithRecord:(id)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (void)notifyDelegateNearnessFactorDidChange:(double)arg1 towardRecord:(id)arg2;
- (void)displayAvatarRecordWithIdentifier:(id)arg1 animated:(_Bool)arg2;
- (void)presentActionsForAvatar:(id)arg1;
- (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(struct CGSize)arg2;

@end
