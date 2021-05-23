/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEHelper;

@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject

{
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NEHelper *helper;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (id)init;
- (id)createXPCRequest:(id)arg1 requestType:(long long)arg2;
- (id)processQueryNetworksResponse:(id)arg1;
- (void)sendRequest:(id)arg1 requestType:(long long)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
