/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <DiagnosticsKit/Swift-Protocol.h>

@class DKMutableDiagnosticResult;

@protocol DKDiagnostic <Swift>

@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;

- (unsigned short)start;

@end
