/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface TUCallHistoryManagerXPCClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)asynchronousServer;
+ (void)setAsynchronousServer:(id)arg1;
+ (id)synchronousServer;
+ (void)setSynchronousServer:(id)arg1;
+ (id)callHistoryManagerAllowedClasses;
+ (id)callHistoryManagerServerXPCInterface;
+ (id)callHistoryManagerClientXPCInterface;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2;
- (void)handleServerDisconnect;
- (id)synchronousServerWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serverWithErrorHandler:(CDUnknownBlockType)arg1;

@end
