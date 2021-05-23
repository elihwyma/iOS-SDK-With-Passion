/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSString;

@interface SASPresentationConnectionListener : NSObject

{
    BSServiceConnectionListener *_listener;
}

@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)listener;

- (id)init;
- (id)_init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
