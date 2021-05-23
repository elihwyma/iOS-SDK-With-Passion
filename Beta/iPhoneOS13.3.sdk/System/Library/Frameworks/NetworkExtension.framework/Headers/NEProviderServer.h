/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEExtensionProviderContext, NSMutableArray, NSString;

@interface NEProviderServer : NSObject

{
    NSMutableArray *_listeners;
    NSMutableArray *_contexts;
}

@property (nonatomic, readonly) NSMutableArray *listeners;
@property (nonatomic, readonly) NSMutableArray *contexts;
@property (readonly) NEExtensionProviderContext *firstContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)removeProviderContext:(id)arg1;
- (id)getListenerForExtensionPoint:(id)arg1;
- (void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2;

@end
