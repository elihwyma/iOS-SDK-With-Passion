/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSDaemonResponseHandler : NSObject

{
    id _block;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) id block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithBlock:(id)arg1 queue:(id)arg2;

@end
