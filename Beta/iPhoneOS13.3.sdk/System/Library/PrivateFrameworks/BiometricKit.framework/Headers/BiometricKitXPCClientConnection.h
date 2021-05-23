/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSMutableDictionary, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BiometricKitXPCClientConnection : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_clients;
    int serverStartedNotificationToken;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)connectionWithDeviceType:(long long)arg1;

- (void)dealloc;
- (_Bool)addClient:(id)arg1;
- (_Bool)removeClient:(id)arg1;
- (id)initWithDeviceType:(long long)arg1;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)touchIDButtonPressed:(_Bool)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (id)client:(unsigned long long)arg1;

@end
