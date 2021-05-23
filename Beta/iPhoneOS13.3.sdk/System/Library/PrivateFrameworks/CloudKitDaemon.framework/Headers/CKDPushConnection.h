/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface CKDPushConnection : NSObject

{
    NSString *_apsEnvironmentString;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionBlocks;
}

@property (retain, nonatomic) APSConnection *apsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1;

- (void)dealloc;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (void)getToken:(CDUnknownBlockType)arg1;

@end
