/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TCPDumpProbe : NetDiagnosticProbe

{
    NSMutableArray *_probeOutputFilePaths;
    NSObject<OS_dispatch_source> *_tcpDumpTimer;
    CDUnknownBlockType _tcpDumpCompletedBlock;
    double _duration;
    NSString *_destinationPath;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *tcpDumpTimer;
@property (nonatomic) CDUnknownBlockType tcpDumpCompletedBlock;
@property double duration;
@property (retain, nonatomic) NSString *destinationPath;

- (id)initWithQueue:(id)arg1;
- (void)stopTest;
- (_Bool)startNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (_Bool)stopNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (void)startTCPDumpWithDuration:(double)arg1 destinationPath:(id)arg2 tcpDumpStarted:(CDUnknownBlockType)arg3 tcpDumpCompleted:(CDUnknownBlockType)arg4;
- (id)probeOutputFilePaths;

@end
