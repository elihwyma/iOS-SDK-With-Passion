/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSPipe.h>

@class NSFileHandle;

__attribute__((visibility("hidden")))
@interface NSConcretePipe : NSPipe

{
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;

@end
