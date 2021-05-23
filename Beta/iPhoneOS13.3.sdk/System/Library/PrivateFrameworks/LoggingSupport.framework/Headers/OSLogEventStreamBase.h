/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSPredicate;

@protocol OS_dispatch_queue;

@interface OSLogEventStreamBase : NSObject

{
    unsigned int _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_target;
    unsigned long long _flags;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _streamHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned long long flags;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) CDUnknownBlockType streamHandler;
@property (nonatomic) unsigned int invalidated;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)invalidate;
- (void)setEventHandler:(CDUnknownBlockType)arg1;

@end
