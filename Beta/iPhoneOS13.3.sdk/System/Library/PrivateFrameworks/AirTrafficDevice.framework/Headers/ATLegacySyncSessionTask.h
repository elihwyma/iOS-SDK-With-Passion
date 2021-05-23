/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSessionTask.h>

@class NSObject, NSString;

@protocol ATClient, OS_dispatch_queue;

@interface ATLegacySyncSessionTask : ATSessionTask

{
    NSString *_dataClass;
    id <ATClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _grappaSessionID;
}

@property (copy, nonatomic, readonly) NSString *dataClass;
@property (nonatomic) unsigned int grappaSessionID;

- (void)cancel;
- (void)start;
- (id)sessionGroupingKey;
- (void)_finishWithError:(id)arg1 shouldAddAssetTask:(_Bool)arg2;
- (id)initWithDataClass:(id)arg1;
- (void)prepareWithHostAnchor:(id)arg1 version:(id)arg2;
- (void)reconcileWithAnchor:(id)arg1 syncType:(unsigned int)arg2;

@end
