/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface GCDAsyncWritePacket : NSObject

{
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end
