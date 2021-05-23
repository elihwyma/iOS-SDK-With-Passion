/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface APRAppPreferenceServer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)prewarmWithReply:(CDUnknownBlockType)arg1;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2;

@end
