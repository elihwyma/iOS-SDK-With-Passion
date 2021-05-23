/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <UIKit/UIViewController.h>

@class DKDiagnosticContextMock, DKMutableDiagnosticResult, NSLock, NSString;

@interface DKDiagnosticViewControllerMock : UIViewController

{
    _Bool _finished;
    _Bool _cancelled;
    _Bool _setup;
    _Bool _shouldShowPressHomeLabel;
    DKMutableDiagnosticResult *_result;
    DKDiagnosticContextMock *_context;
    NSLock *_finishedLock;
    CDUnknownBlockType _completion;
    Class _inputsClass;
}

@property (retain, nonatomic) DKDiagnosticContextMock *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) Class inputsClass;
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
- (void)start;
- (void)setCancelled:(_Bool)arg1;
- (void)beginRequestWithInputsClass:(Class)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
