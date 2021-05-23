/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol NDBackgroundSessionProtocol <Swift>

- (unsigned short)cancelTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setPropertyOnStreamWithIdentifier:propDict:propKey:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeTaskWithIdentifier:withProperties: /* Error: Ran out of types for this method. */;
- (unsigned short)setExpectedProgressTarget:forTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setBytesPerSecondLimit:forTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setPriority:forTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)dataTaskWithRequest:originalRequest:identifier:uniqueIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetStorageWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)avAggregateAssetDownloadTaskWithDownloadToken:serializedMediaSelections:assetTitle:assetArtworkData:options:childDownloadSessionIdentifier:identifier:uniqueIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)avAssetDownloadTaskWithDownloadToken:URL:destinationURL:temporaryDestinationURL:assetTitle:assetArtworkData:options:identifier:uniqueIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadTaskWithRequest:originalRequest:downloadFilePath:identifier:uniqueIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadTaskWithResumeData:identifier:uniqueIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uploadTaskWithRequest:originalRequest:fromFile:sandboxExtensionData:identifier:uniqueIdentifier:potentialCredentials:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setTLSSessionCachePrefix: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setDiscretionaryOverride:forTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setDescription:forTask: /* Error: Ran out of types for this method. */;
- (unsigned short)setLoadingPoolPriority:forTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendTaskWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelTaskWithIdentifier:byProducingResumeData: /* Error: Ran out of types for this method. */;

@end
