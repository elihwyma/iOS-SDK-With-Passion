/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSStream.h>

@interface NSOutputStream : NSStream

{
    unsigned char _reserved[128];
}

@property (readonly) _Bool hasSpaceAvailable;

@end
