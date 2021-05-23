/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSFileHandle;

@interface NSPipe : NSObject

@property (retain, readonly) NSFileHandle *fileHandleForReading;
@property (retain, readonly) NSFileHandle *fileHandleForWriting;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)pipe;

- (id)init;
- (void)_closeOnDealloc;

@end
