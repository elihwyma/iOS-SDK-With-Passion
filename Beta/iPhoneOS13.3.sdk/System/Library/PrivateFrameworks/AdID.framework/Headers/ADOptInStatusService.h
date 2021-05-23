/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/ADSingleton.h>

@class NSString, NSXPCListener;

@interface ADOptInStatusService : ADSingleton

{
    _Bool _requestInFlight;
    NSXPCListener *_listener;
}

@property (retain) NSXPCListener *listener;
@property (nonatomic) _Bool requestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)clearAdvertisingIdentifier;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)advertisingIdentifier:(CDUnknownBlockType)arg1;
- (long long)optInStatusFromRecord:(id)arg1;
- (id)optInStatusString:(long long)arg1;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestOptInStatusFromJingle:(CDUnknownBlockType)arg1;
- (void)reconcileAndUpdateBeforeResponding:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
