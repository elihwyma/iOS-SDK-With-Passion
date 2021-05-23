/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class ASTrafficLogger, NSFileHandle, NSMutableArray, NSString;

@interface ASParseContext : NSObject

{
    _Bool _moreDataExpected;
    _Bool _keepPreviousData;
    _Bool _lastLookedAtBufferHadStringEndPrefix;
    int _streamingState;
    int _codePage;
    int _dataGeneration;
    unsigned int _lastFoundBufferWithoutLineEnding;
    unsigned int _numTokensInBuffersWithoutLineEndings;
    long long _curOffset;
    NSString *_parseErrorReason;
    long long _expectedTotalBytesCount;
    long long _currentBytesReceivedCount;
    NSMutableArray *_dataBuffers;
    unsigned long long _offsetIntoFirstData;
    NSMutableArray *_bypassedDataBuffers;
    NSFileHandle *_logFileHandle;
    NSString *_logFilePath;
    ASTrafficLogger *_trafficLogger;
}

@property (nonatomic) long long curOffset;
@property (nonatomic) long long currentBytesReceivedCount;
@property (retain, nonatomic) NSMutableArray *dataBuffers;
@property (nonatomic) unsigned long long offsetIntoFirstData;
@property (nonatomic) unsigned int lastFoundBufferWithoutLineEnding;
@property (nonatomic) unsigned int numTokensInBuffersWithoutLineEndings;
@property (nonatomic) _Bool lastLookedAtBufferHadStringEndPrefix;
@property (retain, nonatomic) NSMutableArray *bypassedDataBuffers;
@property (retain, nonatomic) NSFileHandle *logFileHandle;
@property (retain, nonatomic) NSString *logFilePath;
@property (retain, nonatomic) ASTrafficLogger *trafficLogger;
@property (nonatomic) int streamingState;
@property (nonatomic) int codePage;
@property (retain, nonatomic) NSString *parseErrorReason;
@property (nonatomic) _Bool moreDataExpected;
@property (nonatomic) int dataGeneration;
@property (nonatomic) long long expectedTotalBytesCount;
@property (nonatomic) _Bool keepPreviousData;

- (id)init;
- (void)dealloc;
- (void)addData:(id)arg1;
- (unsigned char)nextByte;
- (void)setShouldLog:(_Bool)arg1;
- (void)flushLogs;
- (unsigned char)currentByte;
- (_Bool)advanceOffsetByAmount:(unsigned int)arg1;
- (char *)bufferForLength:(unsigned int)arg1 shouldFree:(_Bool *)arg2;
- (_Bool)hasNumberOfTokensRemaining:(unsigned int)arg1;
- (id)bufferWithAllData;
- (long long)goodSizeForBuffer;
- (_Bool)advanceOffsetByAmount:(unsigned int)arg1 retainLastToken:(_Bool)arg2;
- (int)numTokensStreamableForNextStringSizeOfTerminator:(int *)arg1;
- (int)numTokensForNextString;
- (int)numTokensForNextOpaqueData;
- (void)invalidateBuffers;
- (unsigned char)byteAtOffsetFromCurrentByte:(unsigned int)arg1;
- (int)numberOfBytesUntilStringEnd:(char *)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(_Bool)arg3;
- (int)_numTokensForNextOpaqueDataCheckNumTokens:(_Bool)arg1;
- (void)resetToZeroOffset;

@end
