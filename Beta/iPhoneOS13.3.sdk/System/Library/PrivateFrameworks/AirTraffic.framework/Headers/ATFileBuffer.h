/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class NSFileHandle;

@interface ATFileBuffer : NSObject

{
    NSFileHandle *_bufferFileHandle;
    unsigned long long _currentReadLocation;
    unsigned long long _length;
}

- (id)init;
- (unsigned long long)length;
- (void)appendData:(id)arg1;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)rewindData:(id)arg1;
- (void)rewind:(unsigned long long)arg1;

@end
