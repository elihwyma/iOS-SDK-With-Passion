/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL, NSXPCStoreServer;

@interface TBPersistenceRemoteStoreServer : NSObject

{
    NSXPCStoreServer *_xpcStoreServer;
    NSURL *_storeURL;
    NSURL *_modelURL;
    NSDictionary *_serverOptions;
}

@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *serverOptions;

- (void)startListening;
- (id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3;

@end
