/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@protocol transparencyd_protocol

- (unsigned short)logResultForEvent:hardFailure:result: /* Error: Ran out of types for this method. */;
- (unsigned short)logResultForEvent:hardFailure:result:withAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)logSuccessForEventNamed: /* Error: Ran out of types for this method. */;
- (unsigned short)logHardFailureForEventNamed:withAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)logSoftFailureForEventNamed:withAttributes: /* Error: Ran out of types for this method. */;
- (unsigned short)noteEventNamed: /* Error: Ran out of types for this method. */;
- (unsigned short)logMetric:withName: /* Error: Ran out of types for this method. */;
- (unsigned short)runDutyCycleForActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)validatePeerUri:application:accountID:loggableDatas:queryRequest:queryResponse:promiseCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)validatePeerUriResult:uuid:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)validateSelfUriResult:uuid:syncedDatas:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)validateEnrollmentUri:application:accountID:loggableData:queryRequest:queryResponse:promiseCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)validateEnrollmentUriResult:uuid:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)convertToSelfRequest:serverDatas:syncedDatas:queryRequest:queryResponse:updateCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)forceValidateUUID:uri:block: /* Error: Ran out of types for this method. */;
- (unsigned short)forceConfigUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)forceApplicationKeysDownload:block: /* Error: Ran out of types for this method. */;
- (unsigned short)forceApplicationKeysFetch:block: /* Error: Ran out of types for this method. */;
- (unsigned short)forceApplicationConfig:block: /* Error: Ran out of types for this method. */;
- (unsigned short)copyApplicationState:block: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLogClientConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)copyKeyStoreState: /* Error: Ran out of types for this method. */;
- (unsigned short)copyKeyStoreStateFromDisk: /* Error: Ran out of types for this method. */;
- (unsigned short)runDutyCycle: /* Error: Ran out of types for this method. */;
- (unsigned short)clearApplicationState:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clearLogClientConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPublicKeyStoreState:block: /* Error: Ran out of types for this method. */;
- (unsigned short)copyDataStoreStatistics: /* Error: Ran out of types for this method. */;
- (unsigned short)copyDaemonState: /* Error: Ran out of types for this method. */;
- (unsigned short)copyApplicationTranscript:block: /* Error: Ran out of types for this method. */;

@end
