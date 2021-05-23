/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface ENGroupContextNotifyingObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _onGroupCache;
    CDUnknownBlockType _onGroupCreate;
    CDUnknownBlockType _onGroupUpdate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType onGroupCreate;
@property (copy, nonatomic) CDUnknownBlockType onGroupCache;
@property (copy, nonatomic) CDUnknownBlockType onGroupUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)groupContext:(id)arg1 didCreateGroup:(id)arg2;
- (void)groupContext:(id)arg1 didCacheGroup:(id)arg2;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;

@end
