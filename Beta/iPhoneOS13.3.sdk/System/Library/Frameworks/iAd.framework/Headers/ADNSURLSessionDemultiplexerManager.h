/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSURLSessionConfiguration;

@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexerManager : NSObject

{
    NSArray *_protocolClasses;
    NSMutableDictionary *_sessionDemultiplexerForIdentifier;
    NSObject<OS_dispatch_queue> *_demuxManagerQueue;
    NSURLSessionConfiguration *_proxySessionConfigurationLegacy;
    NSURLSessionConfiguration *_proxySessionConfigurationConnect;
}

@property (retain) NSMutableDictionary *sessionDemultiplexerForIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *demuxManagerQueue;
@property (retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationLegacy;
@property (retain, nonatomic) NSURLSessionConfiguration *proxySessionConfigurationConnect;
@property (copy) NSArray *protocolClasses;

+ (id)sharedManager;

- (id)init;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1;
- (id)sessionConfigurationForProxyType:(long long)arg1;
- (void)contentProxyURLDidChange;
- (void)contentProxyURLConnectDidChange;
- (void)proxyTypeDidChange;
- (void)configVersionDidChange;
- (id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2 proxyType:(long long)arg3;
- (long long)pretapRequestCountForIdentifier:(id)arg1;

@end
