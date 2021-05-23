/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyDumpProbe, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, ProbeManagerDelegate;

__attribute__((visibility("hidden")))
@interface ProbeManager : NSObject

{
    unsigned long long probeSequenceNumber;
    id <ProbeManagerDelegate> _delegate;
    NSMutableDictionary *_probes;
    id _probeDetails;
    CoreTelephonyDumpProbe *_ctDumpProbe;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id probeDetails;
@property (retain, nonatomic) CoreTelephonyDumpProbe *ctDumpProbe;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id <ProbeManagerDelegate> delegate;
@property (nonatomic, readonly) NSMutableDictionary *probes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)finalizeCoreTelephonyDumps;
- (void)initializeCoreTelephonyDumps;
- (void)cancelAllProbes;
- (_Bool)enableCoreTelephonyLoggingForCustomerSeed:(_Bool)arg1;
- (id)probeCallbackFunctions;
- (id)dateTimeStringFromCTDumpFolderPrefix:(id)arg1;
- (void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4;
- (void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(_Bool)arg3;
- (void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(_Bool)arg3;
- (void)coreTelephonyDumpProbeCompleted:(id)arg1 success:(_Bool)arg2;
- (void)awdlPeerPollProbe:(id)arg1 serviceAdded:(id)arg2;
- (void)awdlPeerPollProbe:(id)arg1 serviceUpdated:(id)arg2;
- (void)awdlPeerPollProbe:(id)arg1 serviceRemoved:(id)arg2;
- (void)awdlPeerPollProbeIsComplete:(id)arg1;
- (void)bonjourServiceAdded:(id)arg1 isUpdatedService:(_Bool)arg2;
- (void)bonjourServiceRemoved:(id)arg1;
- (void)bonjourProbeComplete:(id)arg1 status:(unsigned int)arg2;
- (void)startTestTCPConnectionForDiagSession:(id)arg1 url:(id)arg2 host:(id)arg3 port:(id)arg4 interfaceName:(id)arg5 timeout:(id)arg6;
- (void)startTestHTTPForDiagSession:(id)arg1 url:(id)arg2 timeout:(id)arg3 interfaceName:(id)arg4 userAgent:(id)arg5;
- (void)startTCPDumpForDiagSession:(id)arg1 duration:(id)arg2;
- (void)stopTCPDump;
- (void)startGetNetworkInfo:(id)arg1;
- (void)startAirDropBonjourScan:(id)arg1 duration:(id)arg2;
- (void)startICMPPingForDiagSession:(id)arg1 hostName:(id)arg2 ipAddress:(id)arg3 interface:(id)arg4 pingCount:(id)arg5 interPingInterval:(id)arg6 burstCount:(id)arg7 interBurstInterval:(id)arg8 timeout:(id)arg9;
- (void)startAWDLPeerPollingWithDiagSession:(id)arg1 services:(id)arg2 count:(id)arg3 interval:(id)arg4;
- (void)startCoreTelephonyDumpProbeForDiagSession:(id)arg1 previousDumpTimestamp:(id)arg2 previousDumpFolderPath:(id)arg3 previousDumpFolderPrefix:(id)arg4 timeout:(id)arg5 startNewDump:(id)arg6 maximumSingleFileSize:(id)arg7 dumpReason:(id)arg8;
- (void)fetchCoreTelephonyLoggingEnabledStatus;

@end
