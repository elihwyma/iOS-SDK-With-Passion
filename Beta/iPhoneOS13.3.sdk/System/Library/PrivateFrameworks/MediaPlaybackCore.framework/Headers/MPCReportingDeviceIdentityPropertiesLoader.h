/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedLoader;

- (id)init;
- (void)loadReportingIdentityPropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
