/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@protocol BLServiceProtocol

- (unsigned short)fetchDownloadListWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDownloadFromDownloadID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseDownloadWithID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeDownloadWithID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelDownloadWithID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAllActiveDownloadsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)purchaseWithRequest:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadWithPermlink:title:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDownloadWithParameters:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDownloadWithMetadata:isRestore:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestDownloadsWithMetadata:areRestore:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValueSimulateCrashAtInstallStart:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValueSimulateCrashAtInstallDuringDecrypt:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValueSimulateCrashAtInstallDuringUnzip:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValueSimulateCrashAtInstallDuringFinish:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCrashSimulationOverrideValuesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAllCrashSimulationOverridesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setValueSimulateDeviceOutOfSpace:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getValueSimulateDeviceOutOfSpaceWithReply: /* Error: Ran out of types for this method. */;

@end
