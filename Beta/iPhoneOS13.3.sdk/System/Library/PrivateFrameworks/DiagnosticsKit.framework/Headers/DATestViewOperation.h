/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSOperation.h>

@class DATestViewController, DKMutableDiagnosticResult, NSDictionary, UIViewController;

@protocol DATestViewOperationDelegate;

@interface DATestViewOperation : NSOperation

{
    _Bool _cancelled;
    _Bool _executing;
    _Bool _finished;
    NSDictionary *_parameters;
    NSDictionary *_specifications;
    NSDictionary *_predicates;
    id <DATestViewOperationDelegate> _delegate;
    UIViewController *_viewController;
    DKMutableDiagnosticResult *_testResult;
    DATestViewController *_weakViewController;
}

@property (weak, nonatomic) DATestViewController *weakViewController;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSDictionary *specifications;
@property (retain, nonatomic) NSDictionary *predicates;
@property (weak, nonatomic) id <DATestViewOperationDelegate> delegate;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) DKMutableDiagnosticResult *testResult;

- (void)cancel;
- (void)start;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)finish;
- (void)_cancel;
- (void)_finish;

@end
