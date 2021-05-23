/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface GCDAsyncReadPacket : NSObject

{
    NSMutableData *buffer;
    unsigned long long startOffset;
    unsigned long long bytesDone;
    unsigned long long maxLength;
    double timeout;
    unsigned long long readLength;
    NSData *term;
    _Bool bufferOwner;
    unsigned long long originalBufferLength;
    long long tag;
}

- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1;
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1;
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(_Bool *)arg2;
- (long long)searchForTermAfterPreBuffering:(long long)arg1;

@end
