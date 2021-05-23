/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLBackgroundTask, NSString, _DASActivity;

@protocol NSObject, OS_dispatch_queue;

@interface MLBackgroundRunner : NSObject

{
    _Bool _shouldStop;
    _DASActivity *_activity;
    MLBackgroundTask *_task;
    id <NSObject> _dataSource;
    NSObject<OS_dispatch_queue> *_watchdogQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property _Bool shouldStop;
@property (retain, nonatomic) _DASActivity *activity;
@property (retain, nonatomic) MLBackgroundTask *task;
@property (retain, nonatomic) id <NSObject> dataSource;
@property (retain) NSObject<OS_dispatch_queue> *watchdogQueue;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stop;
- (unsigned char)start;
- (_Bool)prepareForActivity:(id)arg1;
- (_Bool)createExtensionDataSourceWithInfoKey:(id)arg1 conformingToProtocol:(id)arg2;

@end
