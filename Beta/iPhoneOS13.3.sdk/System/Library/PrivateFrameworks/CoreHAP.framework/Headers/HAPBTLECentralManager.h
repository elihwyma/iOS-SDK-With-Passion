/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class CBCentralManager, NSMutableSet, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HAPBTLECentralManager : HMFObject

{
    NSObject<OS_dispatch_queue> *workQueue;
    CBCentralManager *centralManager;
    NSMutableSet *delegates;
    long long state;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSMutableSet *delegates;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getInstance;

- (id)init;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)_getCentralManager;
- (void)registerCentralManagerDelegate:(id)arg1;

@end
