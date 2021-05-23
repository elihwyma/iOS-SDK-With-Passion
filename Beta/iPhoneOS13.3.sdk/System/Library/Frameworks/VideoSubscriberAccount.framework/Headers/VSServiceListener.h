/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSString, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface VSServiceListener : NSObject

{
    NSArray *_entitlementNames;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSMutableSet *_connectionHandlers;
}

@property (retain, nonatomic) NSMutableSet *connectionHandlers;
@property (copy, nonatomic) NSArray *entitlementNames;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connectionHandlerDidFinish:(id)arg1;
- (void)_addConnectionHandler:(id)arg1;
- (void)_removeConnectionHandler:(id)arg1;

@end
