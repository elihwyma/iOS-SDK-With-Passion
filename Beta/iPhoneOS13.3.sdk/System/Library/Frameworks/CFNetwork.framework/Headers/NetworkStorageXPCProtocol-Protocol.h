/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@protocol NetworkStorageXPCProtocol

- (unsigned short)copyAllPartitionNamesWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllHostNames:forOptionalPartition: /* Error: Ran out of types for this method. */;
- (unsigned short)performSchemaCheckAndUpdate;
- (unsigned short)setMaxSize: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllResponses;
- (unsigned short)addCachedResponseWithDictionary:key: /* Error: Ran out of types for this method. */;
- (unsigned short)flushWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteResponsesSinceDate: /* Error: Ran out of types for this method. */;
- (unsigned short)setMinSizeForVMCachedResource: /* Error: Ran out of types for this method. */;
- (unsigned short)createStorageTaskManagerForPath:maxSize:extension: /* Error: Ran out of types for this method. */;
- (unsigned short)currentDiskUsageWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)copyAllHostNamesForOptionalPartition:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteResponseForRequestWithKey:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)totalBytesWrittenToDiskWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
