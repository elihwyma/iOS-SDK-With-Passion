/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class AWDServerConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface WFMetricsManager : NSObject

{
    AWDServerConnection *_server;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSString *_processName;
    NSMutableDictionary *_ssidHashes;
}

@property (retain, nonatomic) AWDServerConnection *server;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (copy, nonatomic) NSString *processName;
@property (retain, nonatomic) NSMutableDictionary *ssidHashes;

+ (id)sharedManager;

- (id)init;
- (void)processEvent:(id)arg1;
- (id)SHAForSSID:(id)arg1;

@end
