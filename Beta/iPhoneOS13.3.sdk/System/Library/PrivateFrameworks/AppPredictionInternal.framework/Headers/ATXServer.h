/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface ATXServer : NSObject

{
    NSString *_cacheFileBasePath;
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_cacheFileDescriptors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)consumerSubTypesToUpdate;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 reply:(CDUnknownBlockType)arg8;
- (void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getAppPredictorAssetMappingDescriptionWithReply:(CDUnknownBlockType)arg1;
- (void)sortAppsByLaunches:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2;
- (void)updateAppPredictionsWithRefreshRate:(double)arg1 reply:(CDUnknownBlockType)arg2;

@end
