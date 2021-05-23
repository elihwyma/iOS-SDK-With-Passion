/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileHandle, NSMutableArray;

@interface DSTextFile : NSObject

{
    _Bool _cancelEnumeration;
    _Bool _isEnumerating;
    NSFileHandle *_fileHandle;
    unsigned long long _bufferSize;
    NSMutableArray *_linePositions;
    NSData *_lineBreak;
    long long _skipCount;
    unsigned long long _currentLineIndex;
}

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned long long bufferSize;
@property (retain, nonatomic) NSMutableArray *linePositions;
@property (retain, nonatomic) NSData *lineBreak;
@property (nonatomic) _Bool cancelEnumeration;
@property (nonatomic) long long skipCount;
@property (nonatomic) _Bool isEnumerating;
@property (nonatomic) unsigned long long currentLineIndex;

+ (id)textFileWithPath:(id)arg1;

- (id)init;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)end;
- (void)seekToOffset:(unsigned long long)arg1;
- (unsigned long long)currentOffset;
- (id)initWithFilePath:(id)arg1;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (void)seekToBeginning;
- (id)initWithFilePath:(id)arg1 withBufferSize:(unsigned long long)arg2;
- (_Bool)advanceToNextLine:(id *)arg1;
- (void)resetEnumerator;
- (unsigned long long)getOffsetAtLineIndex:(unsigned long long)arg1;
- (id)extractLine:(unsigned long long)arg1;
- (_Bool)searchForNextLineFromCurrentPosition:(id *)arg1;
- (void)skipWithLines:(long long)arg1;

@end
