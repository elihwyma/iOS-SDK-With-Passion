/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIViewController.h>

@class NFStateMachine, NFStateMachineState, NSString, UIButton, UIImageView, UILabel;

@protocol SXQuickLookEventHandler, SXQuickLookRenderer;

@interface SXQuickLookViewController : UIViewController

{
    id <SXQuickLookEventHandler> _eventHandler;
    id <SXQuickLookRenderer> _renderer;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_loadingState;
    NFStateMachineState *_presentingState;
    NFStateMachineState *_errorState;
    UIImageView *_thumbnailImageView;
    UIButton *_thumbnailControl;
    UILabel *_errorLabel;
}

@property (nonatomic, readonly) id <SXQuickLookEventHandler> eventHandler;
@property (nonatomic, readonly) id <SXQuickLookRenderer> renderer;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) NFStateMachineState *loadingState;
@property (nonatomic, readonly) NFStateMachineState *presentingState;
@property (nonatomic, readonly) NFStateMachineState *errorState;
@property (nonatomic, readonly) UIImageView *thumbnailImageView;
@property (nonatomic, readonly) UIButton *thumbnailControl;
@property (nonatomic, readonly) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showThumbnailImage:(id)arg1;
- (void)showThumbnailErrorWithMessage:(id)arg1;
- (id)initWithEventHandler:(id)arg1 renderer:(id)arg2;
- (id)createLoadingState;
- (id)createErrorState;
- (void)handleTap;
- (id)createPresentingState;
- (void)configureStateMachine;

@end
