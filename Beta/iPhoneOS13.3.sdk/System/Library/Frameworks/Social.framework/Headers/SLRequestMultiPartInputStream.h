/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSInputStream.h>

@class NSData, SLRequestMultiPart;

@interface SLRequestMultiPartInputStream : NSInputStream

{
    SLRequestMultiPart *_multiPart;
    unsigned long long _streamStatus;
    unsigned long long _bytesReadInState;
    unsigned long long _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}

- (unsigned long long)length;
- (void)open;
- (void)close;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (void)transitionState;
- (unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char *)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4;
- (long long)currentStateRead:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithMultiPart:(id)arg1;

@end
