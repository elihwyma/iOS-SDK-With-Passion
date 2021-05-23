/*
 Image: /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/SymptomDiagnosticReporter
 */

#import <SymptomDiagnosticReporter/Swift-Protocol.h>

@protocol DiagnosticsServiceInterface <Swift>

- (unsigned short)endSession: /* Error: Ran out of types for this method. */;
- (unsigned short)getExpertSystemsStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)getAutoBugCaptureConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotWithSignature:duration:events:payload:actions:wantsRemoteCase:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)startSessionWithSignature:duration:events:payload:actions:wantsRemoteCase:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)addToSession:event:payload:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)addToSession:events:payload:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)addSignatureContentForSession:key:content:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSession: /* Error: Ran out of types for this method. */;
- (unsigned short)getDiagnosticPayloadsForSignatures:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getSessionStatisticsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCasesListFromIdentifier:count:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetDiagnosticCaseStorageWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetDiagnosticCaseUsageWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerRemoteSessionForSignature:groupIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)homeKitResidentDevicesIDSIdentifiersWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeAutoBugCaptureFilesWithSubPaths:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadCasesWithIdentifiersToCloudKit: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadRecentCases: /* Error: Ran out of types for this method. */;
- (unsigned short)cloudKitUploadDecisionForCaseIdentifiers:reply: /* Error: Ran out of types for this method. */;

@end
