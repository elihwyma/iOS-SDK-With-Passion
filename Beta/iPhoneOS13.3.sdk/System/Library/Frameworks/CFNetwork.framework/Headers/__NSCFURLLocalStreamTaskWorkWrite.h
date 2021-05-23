/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@class NSData;

@interface __NSCFURLLocalStreamTaskWorkWrite : __NSCFURLLocalStreamTaskWork

{
    NSData *_bytesAsData;
    unsigned long long _bytesToWrite;
    CDUnknownBlockType _completion;
}

- (void)dealloc;

@end
