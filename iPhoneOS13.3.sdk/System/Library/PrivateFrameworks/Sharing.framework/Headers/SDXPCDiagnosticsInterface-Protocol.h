//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, SFBLEDevice;

@protocol SDXPCDiagnosticsInterface
- (void)diagnosticUnlockTestServer;
- (void)diagnosticUnlockTestClientWithDevice:(SFBLEDevice *)arg1;
- (void)diagnosticShow:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticMockStop:(void (^)(NSError *))arg1;
- (void)diagnosticMockStart:(void (^)(NSError *))arg1;
- (void)diagnosticMock:(NSString *)arg1 device:(SFBLEDevice *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticLogControl:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
- (void)diagnosticControl:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)diagnosticBLEModeWithCompletion:(void (^)(NSError *))arg1;
- (void)bluetoothUserInteraction;
@end

