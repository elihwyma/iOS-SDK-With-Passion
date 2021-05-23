/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <UIKit/UIViewController.h>

#import <DiagnosticsKit/Swift-Protocol.h>

@class CAGradientLayer, CXCallObserver, DKDiagnosticContext, DKMutableDiagnosticResult, NSLock, NSString, _UILegibilityLabel;

@interface DKDiagnosticViewController : UIViewController <Swift>

{
    _Bool _finished;
    _Bool _cancelled;
    _Bool _setup;
    _Bool _shouldShowPressHomeLabel;
    DKMutableDiagnosticResult *_result;
    CXCallObserver *_callObserver;
    DKDiagnosticContext *_context;
    NSLock *_finishedLock;
    _UILegibilityLabel *_pressHomeLabel;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) DKDiagnosticContext *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (retain, nonatomic) _UILegibilityLabel *pressHomeLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) _Bool shouldShowPressHomeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, getter=isSetup) _Bool setup;

- (id)init;
- (void)cancel;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)start;
- (void)viewDidLoad;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setCancelled:(_Bool)arg1;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)monitorIncomingCall;
- (void)displayPressHomeLabel;
- (void)createGradientLayer;
- (void)resetGradientAndLabelBefore:(_Bool)arg1;

@end
