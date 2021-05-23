/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface ASWBXMLToXMLConverter : NSObject

{
    unsigned char _buffer[16384];
    _Bool _done;
    _Bool _oldFormat;
    _Bool _useMetadata;
    _Bool _compact;
    int _state;
    int _wbxmlState;
    int _currentCodePage;
    unsigned int _opaqueDataLength;
    int _ppstate;
    char *_bytesToConsumeVector;
    unsigned long long _bytesToConsumeCount;
    char *_bytesToConsumeEnd;
    long long _maxInlineStringLength;
    NSMutableArray *_codePageStack;
    NSMutableArray *_endTagStack;
    NSMutableData *_stringAccumulator;
    unsigned long long _overflowLength;
}

@property (nonatomic) char *bytesToConsumeVector;
@property (nonatomic) unsigned long long bytesToConsumeCount;
@property (nonatomic) char *bytesToConsumeEnd;
@property (nonatomic) long long maxInlineStringLength;
@property (nonatomic) _Bool done;
@property (nonatomic) int state;
@property (nonatomic) int wbxmlState;
@property (nonatomic) int currentCodePage;
@property (retain, nonatomic) NSMutableArray *codePageStack;
@property (retain, nonatomic) NSMutableArray *endTagStack;
@property (retain, nonatomic) NSMutableData *stringAccumulator;
@property (nonatomic) unsigned long long overflowLength;
@property (nonatomic) unsigned int opaqueDataLength;
@property (nonatomic) int ppstate;
@property (nonatomic) _Bool oldFormat;
@property (nonatomic) _Bool useMetadata;
@property (nonatomic) _Bool compact;

- (void)handleBytesAvailable;
- (void)outputString:(id)arg1;
- (void)_resetWBXMLParser;
- (void)outputData:(id)arg1;
- (long long)readFromInput;
- (void)_consumeBytes;
- (char *)writableBufferPtr;
- (long long)writableBufferSize;
- (id)initUsingMetadata:(_Bool)arg1;

@end
