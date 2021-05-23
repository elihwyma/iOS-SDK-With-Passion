/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject

{
    NSLock *_releaseLock;
    int _referenceCount;
    _Bool _calledDealloc;
}

- (id)init;

@end
