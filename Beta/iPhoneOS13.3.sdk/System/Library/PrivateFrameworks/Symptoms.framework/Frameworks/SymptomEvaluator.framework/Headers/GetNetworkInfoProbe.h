/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GetNetworkInfoProbe : NetDiagnosticProbe

{
    NSMutableArray *_probeOutputFilePaths;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) CDUnknownBlockType completionBlock;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (_Bool)startNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;

@end
