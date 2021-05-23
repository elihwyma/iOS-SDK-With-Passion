/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryBlockObserver : NSObject

{
    CDUnknownBlockType _updateHandler;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)queryManager:(id)arg1 didReceiveUpdatesForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (id)initWithHandler:(CDUnknownBlockType)arg1 operationQueue:(id)arg2;
- (id)initWithHandler:(CDUnknownBlockType)arg1 dispatchQueue:(id)arg2;

@end
