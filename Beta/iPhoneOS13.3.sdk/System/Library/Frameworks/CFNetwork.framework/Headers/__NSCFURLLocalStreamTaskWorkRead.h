/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@class NSData;

@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork

{
    unsigned long long _minBytes;
    unsigned long long _maxBytes;
    CDUnknownBlockType _completion;
    NSData *_readData;
    _Bool _eof;
}

- (void)dealloc;

@end
