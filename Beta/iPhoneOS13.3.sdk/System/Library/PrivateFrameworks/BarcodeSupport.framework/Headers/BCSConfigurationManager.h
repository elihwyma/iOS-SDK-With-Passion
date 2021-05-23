/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface BCSConfigurationManager : NSObject

{
    NSXPCConnection *_serviceConnection;
}

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void)setUpQRCodeControlCenterModuleWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
