/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTag.h>

@class NSData, NSString;

@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCISO15693ReaderSessionTag : NFCTag

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic, readonly) NSData *identifier;
@property (nonatomic, readonly) unsigned long long icManufacturerCode;
@property (copy, nonatomic, readonly) NSData *icSerialNumber;

+ (id)reverseByteOrder:(id)arg1;
+ (_Bool)decodeIdentifier:(id)arg1 manufacturerCode:(unsigned long long *)arg2 serialNumber:(id *)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_parseResponseErrorWithData:(id)arg1;
- (_Bool)_transceiveWithData:(id)arg1 receivedData:(id *)arg2 commandConfig:(id)arg3 error:(id *)arg4;
- (id)_parseResponseData:(id)arg1 outError:(id *)arg2;
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stayQuietWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
