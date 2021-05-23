/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSObject.h>

@class ATVModel, CBCentralManager, NSString;

@protocol OS_dispatch_queue;

@interface CBConnectionsObserver : NSObject

{
    _Bool _hasStarted;
    CBCentralManager *_central;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ATVModel *_model;
}

@property (retain) CBCentralManager *central;
@property (weak) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool hasStarted;
@property (retain) ATVModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)centralManagerDidUpdateState:(id)arg1;
- (id)getStatus;
- (id)initWithCentralManager:(id)arg1 Queue:(id)arg2 Error:(id *)arg3;
- (void)cleanupWithError:(id *)arg1;
- (int)getAvailableHAPConnections;
- (void)attachSessionWithError:(id *)arg1;
- (void)updateBleStatus:(struct BTRemoteContext *)arg1;

@end
