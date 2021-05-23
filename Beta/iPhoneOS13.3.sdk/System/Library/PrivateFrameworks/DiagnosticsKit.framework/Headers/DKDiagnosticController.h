/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

#import <DiagnosticsKit/Swift-Protocol.h>

@class DKDiagnosticContext, DKMutableDiagnosticResult, NSLock, NSString;

@interface DKDiagnosticController : NSObject <Swift>

{
    _Bool _finished;
    _Bool _cancelled;
    _Bool _setup;
    DKMutableDiagnosticResult *_result;
    DKDiagnosticContext *_context;
    NSLock *_finishedLock;
}

@property (retain, nonatomic) DKDiagnosticContext *context;
@property (retain, nonatomic) NSLock *finishedLock;
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
- (void)setCancelled:(_Bool)arg1;

@end
