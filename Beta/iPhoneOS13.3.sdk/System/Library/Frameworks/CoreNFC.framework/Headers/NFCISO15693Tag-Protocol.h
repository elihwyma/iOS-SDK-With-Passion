/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@protocol NFCISO15693Tag <Swift>

@property (copy, nonatomic, readonly) NSData *identifier;
@property (nonatomic, readonly) unsigned long long icManufacturerCode;
@property (copy, nonatomic, readonly) NSData *icSerialNumber;

- (unsigned short)sendCustomCommandWithConfiguration:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readMultipleBlocksWithConfiguration:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stayQuietWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readSingleBlockWithRequestFlags:blockNumber:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeSingleBlockWithRequestFlags:blockNumber:dataBlock:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)lockBlockWithRequestFlags:blockNumber:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readMultipleBlocksWithRequestFlags:blockRange:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeMultipleBlocksWithRequestFlags:blockRange:dataBlocks:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)selectWithRequestFlags:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetToReadyWithRequestFlags:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeAFIWithRequestFlag:afi:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)lockAFIWithRequestFlag:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)writeDSFIDWithRequestFlag:dsfid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)lockDFSIDWithRequestFlag:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSystemInfoWithRequestFlag:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getMultipleBlockSecurityStatusWithRequestFlag:blockRange:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)customCommandWithRequestFlag:customCommandCode:customRequestParameters:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendedReadSingleBlockWithRequestFlags:blockNumber:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendedWriteSingleBlockWithRequestFlags:blockNumber:dataBlock:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendedLockBlockWithRequestFlags:blockNumber:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)extendedReadMultipleBlocksWithRequestFlags:blockRange:completionHandler: /* Error: Ran out of types for this method. */;

@end
