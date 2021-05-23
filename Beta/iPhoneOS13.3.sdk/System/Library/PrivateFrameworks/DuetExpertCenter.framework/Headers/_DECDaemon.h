/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, _DECDailyTrainingScheduler, _DECExpertManager, _DECServerResponder;

@protocol OS_dispatch_queue;

@interface _DECDaemon : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    _DECExpertManager *_expertManager;
    _DECServerResponder *_serverResponder;
    _DECDailyTrainingScheduler *_trainingScheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_getServerResponder;
- (void)_runDelayedInitializationOperations;

@end
