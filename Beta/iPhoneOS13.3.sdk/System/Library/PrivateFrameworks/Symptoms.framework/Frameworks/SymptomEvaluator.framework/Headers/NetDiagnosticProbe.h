/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TestProbe.h>

@class NSMutableDictionary, NSString, NetDiagnosticsShim;

__attribute__((visibility("hidden")))
@interface NetDiagnosticProbe : TestProbe

{
    NetDiagnosticsShim *_netDiags;
    NSString *_taskName;
    NSString *_ndFilePath;
    NSMutableDictionary *_netDiagsTaskDict;
}

@property (retain, nonatomic) NetDiagnosticsShim *netDiags;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *ndFilePath;
@property (retain, nonatomic) NSMutableDictionary *netDiagsTaskDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)startNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (void)disconnectFromNetDiagnostics;
- (_Bool)netDiagnosticsTaskInProgress:(CDUnknownBlockType)arg1;
- (id)setUpDefaultTaskDictionary;
- (_Bool)stopNetDiagnosticsTask:(CDUnknownBlockType)arg1;
- (void)cancelTest:(CDUnknownBlockType)arg1;

@end
