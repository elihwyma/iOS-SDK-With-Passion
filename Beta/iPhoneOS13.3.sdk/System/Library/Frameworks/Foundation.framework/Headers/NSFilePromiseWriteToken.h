/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSFilePromiseWriteToken : NSObject

{
    NSURL *promiseURL;
    NSURL *logicalURL;
}

@property (copy) NSURL *promiseURL;
@property (copy) NSURL *logicalURL;

- (void)dealloc;

@end
