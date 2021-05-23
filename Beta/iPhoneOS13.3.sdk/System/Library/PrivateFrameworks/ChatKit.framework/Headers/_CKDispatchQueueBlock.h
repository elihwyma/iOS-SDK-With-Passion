/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CKDispatchQueueBlock : NSObject

{
    CDUnknownBlockType _block;
    NSString *_key;
    long long _priority;
    unsigned long long _fifo;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long priority;
@property (nonatomic, setter=setFIFO:) unsigned long long fifo;

- (id)description;
- (long long)compare:(id)arg1;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1 key:(id)arg2 priority:(long long)arg3 fifo:(unsigned long long)arg4;

@end
