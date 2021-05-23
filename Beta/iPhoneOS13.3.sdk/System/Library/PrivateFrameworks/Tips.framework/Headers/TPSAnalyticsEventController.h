/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, TPSAnalyticsDataProvider, TPSDuetDataProvider, _TPSXPCConnection;

@protocol OS_dispatch_queue;

@interface TPSAnalyticsEventController : NSObject

{
    TPSDuetDataProvider *_duetDataProvider;
    TPSAnalyticsDataProvider *_dataProvider;
    _TPSXPCConnection *_xpcConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (retain, nonatomic) _TPSXPCConnection *xpcConnection;
@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (_Bool)callerIsTipsd;

- (id)_init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)_destroyXPCConnection;
- (void)logAnalyticsEvent:(id)arg1;
- (void)logAnalyticsEvents:(id)arg1;
- (void)logAnalyticsEventsFromTipsd:(id)arg1;
- (void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2;
- (void)logAnalyticsEventFromTipsd:(id)arg1;

@end
