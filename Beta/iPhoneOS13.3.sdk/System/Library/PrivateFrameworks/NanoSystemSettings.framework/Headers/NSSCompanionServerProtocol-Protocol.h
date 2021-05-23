/*
 Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

#import <NanoSystemSettings/Swift-Protocol.h>

@protocol NSSCompanionServerProtocol <Swift>

- (unsigned short)setDeviceName: /* Error: Ran out of types for this method. */;
- (unsigned short)rebootDevice;
- (unsigned short)getProfilesInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccountsInfoForAccountType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getUsage: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeUsageBundle:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDiagnosticLogFileFromGizmo:withResults: /* Error: Ran out of types for this method. */;
- (unsigned short)getDiagnosticLogsInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelActiveLogFileTranfers;
- (unsigned short)deleteDiagnosticLogFile:withResult: /* Error: Ran out of types for this method. */;
- (unsigned short)getAboutInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)obliterateGizmoPreservingeSIM:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getProfileWithIdentifier:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)installProfile:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProfileWithIdentifier:replyHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLegalDocuments: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocalesInfo: /* Error: Ran out of types for this method. */;

@end
