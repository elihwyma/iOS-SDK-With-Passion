/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString, TRDeviceSetupPeripheral, TRTransferBrowser;

@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject

{
    id <TRDeviceSetupBrowserDelegate> _delegate;
    TRTransferBrowser *_transferBrowser;
    TRDeviceSetupPeripheral *_peripheral;
}

@property (retain, nonatomic) TRTransferBrowser *transferBrowser;
@property (retain, nonatomic) TRDeviceSetupPeripheral *peripheral;
@property (weak, nonatomic) id <TRDeviceSetupBrowserDelegate> delegate;
@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stop;
- (void)start;
- (void)defer;
- (void)browser:(id)arg1 didStartTransferWithSendDataHandler:(CDUnknownBlockType)arg2;
- (void)browserDidDisconnect:(id)arg1;
- (void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)browserDidChangeState:(id)arg1;

@end
