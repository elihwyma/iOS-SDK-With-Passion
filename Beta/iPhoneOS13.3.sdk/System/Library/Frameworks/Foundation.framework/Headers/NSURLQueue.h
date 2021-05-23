/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject

{
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    _Bool waitOnTake;
    _Bool _pad1;
    _Bool _pad2;
    _Bool _pad3;
}

+ (id)newNode;

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (void)clear;
- (_Bool)isEmpty;
- (_Bool)remove:(id)arg1;
- (void)put:(id)arg1;
- (id)take;
- (id)peek;
- (id)peekAt:(unsigned long long)arg1;
- (long long)indexOf:(id)arg1;
- (_Bool)waitOnTake;
- (void)setWaitOnTake:(_Bool)arg1;

@end
