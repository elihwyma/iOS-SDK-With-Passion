/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSXPCListener.h>

@class NSString;

@protocol NRNSXPCListenerDelegate;

@interface NRNSXPCListener : NSXPCListener

{
    id <NRNSXPCListenerDelegate> _listenerDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
