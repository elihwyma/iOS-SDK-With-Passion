/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CPSTemplateBannerController : NSObject

{
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_connections;
    NSMutableDictionary *_bannerSources;
}

@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableDictionary *connections;
@property (retain, nonatomic) NSMutableDictionary *bannerSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)postBannerForNavigationAlert:(id)arg1;
- (void)sceneActivationStateChangedTo:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (id)_connectionForBannerSource:(id)arg1;
- (void)bannerSource:(id)arg1 bannerTappedWithIdentifier:(id)arg2;
- (void)bannerSource:(id)arg1 bannerDidAppearWithIdentifier:(id)arg2;
- (void)bannerSource:(id)arg1 bannerDidDisappearWithIdentifier:(id)arg2;

@end
