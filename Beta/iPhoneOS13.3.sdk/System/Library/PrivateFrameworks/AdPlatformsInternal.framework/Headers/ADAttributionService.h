/*
 Image: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
 */

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary, NSNumber, NSString, NSXPCListener;

@interface ADAttributionService : ADSingleton

{
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSNumber *_transactionID;
}

@property (retain) NSXPCListener *listener;
@property (retain, nonatomic) NSMutableDictionary *clients;
@property (retain, nonatomic) NSNumber *transactionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeClientForToken:(id)arg1;

@end
