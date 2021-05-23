/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSStream.h>

@interface NSInputStream : NSStream

{
    unsigned char _reserved[128];
}

@property (readonly) _Bool hasBytesAvailable;

@end
