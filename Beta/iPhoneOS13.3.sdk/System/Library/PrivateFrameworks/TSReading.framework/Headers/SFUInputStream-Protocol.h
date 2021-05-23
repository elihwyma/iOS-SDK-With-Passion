/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@protocol SFUInputStream <Swift>

- (unsigned short)close;
- (unsigned short)offset;
- (unsigned short)seekToOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)canSeek;
- (unsigned short)readToBuffer:size: /* Error: Ran out of types for this method. */;
- (unsigned short)disableSystemCaching;
- (unsigned short)enableSystemCaching;
- (unsigned short)closeLocalStream;

@end
