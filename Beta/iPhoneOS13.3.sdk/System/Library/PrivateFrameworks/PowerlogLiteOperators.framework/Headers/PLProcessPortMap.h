/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PLProcessPortMap : NSObject

{
    NSMutableDictionary *_localPortToPidAndProcessName;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain) NSMutableDictionary *localPortToPidAndProcessName;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)reconstructPortMapInternal;
- (void)clearPortMapInternal;
- (id)keyFromAddress:(id)arg1 withPort:(id)arg2 withProtocol:(id)arg3;
- (_Bool)isAddressIPV4:(id)arg1;
- (id)keyFromPortInfo:(struct net_port_info *)arg1;
- (void)reconstructPortMap;
- (void)clearPortMap;
- (id)pidAndProcessNameForLocalAddress:(id)arg1 withLocalPort:(id)arg2 withProtocol:(id)arg3;

@end
