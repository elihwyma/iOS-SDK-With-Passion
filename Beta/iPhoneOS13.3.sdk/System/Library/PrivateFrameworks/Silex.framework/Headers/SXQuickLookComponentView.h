/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentView.h>

@class NFStateMachine, NFStateMachineState, SXQuickLookViewController, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;

@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;

@interface SXQuickLookComponentView : SXComponentView

{
    id <SXQuickLookModule> _quickLookModule;
    id <SXQuickLookComponentFileProvider> _fileProvider;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_idleState;
    NFStateMachineState *_loadingState;
    NFStateMachineState *_presentingState;
    NFStateMachineState *_errorState;
    UIActivityIndicatorView *_loadingIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_errorLabel;
    SXQuickLookViewController *_quickLookViewController;
}

@property (nonatomic, readonly) id <SXQuickLookModule> quickLookModule;
@property (nonatomic, readonly) id <SXQuickLookComponentFileProvider> fileProvider;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) NFStateMachineState *idleState;
@property (nonatomic, readonly) NFStateMachineState *loadingState;
@property (nonatomic, readonly) NFStateMachineState *presentingState;
@property (nonatomic, readonly) NFStateMachineState *errorState;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) SXQuickLookViewController *quickLookViewController;

- (void)layout;
- (void)configure;
- (void)discardContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (id)createLoadingState;
- (id)createErrorState;
- (void)layoutErrorView;
- (void)layoutLoadingIndicator;
- (void)layoutWebView;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6;
- (void)handleTap;
- (id)createIdleState;
- (id)createPresentingState;

@end
