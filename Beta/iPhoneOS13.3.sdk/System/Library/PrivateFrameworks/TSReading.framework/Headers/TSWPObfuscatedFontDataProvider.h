/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject

{
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)dealloc;
- (id)initWithPath:(id)arg1 groupUID:(id)arg2;
- (long long)p_currentOffset;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2;
- (long long)skipForwardBy:(long long)arg1;
- (void)rewind;

@end
