/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AKCarouselAlertClientConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedConnection;

- (id)init;
- (void)dealloc;
- (id)connection;
- (void)unsafe_invalidate;
- (void)presentAlertWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAlert:(id)arg1;

@end
