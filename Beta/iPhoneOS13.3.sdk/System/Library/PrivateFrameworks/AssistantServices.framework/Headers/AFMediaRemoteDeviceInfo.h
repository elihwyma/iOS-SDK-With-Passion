/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface AFMediaRemoteDeviceInfo : NSObject

{
    _Bool _lastFetchSucceeded;
    NSString *_routeIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) _Bool lastFetchSucceeded;
@property (copy, nonatomic) NSString *routeIdentifier;

+ (id)currentDevice;

- (id)init;
- (void)_activeDeviceInfoChanged:(id)arg1;
- (void)_updateRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRouteIdentifierWithCompletion:(CDUnknownBlockType)arg1;

@end
