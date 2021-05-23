/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSNotificationServiceConnection, BCSParsingServiceConnection;

@interface BCSQRCodeParser : NSObject

{
    BCSParsingServiceConnection *_parsingServiceConnection;
    BCSNotificationServiceConnection *_notificationServiceConnection;
}

@property (nonatomic, readonly) BCSNotificationServiceConnection *notificationServiceConnection;

- (void)parseCodeFromImage:(struct CGImage *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopQRCodeParsingSession;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_parseMetadataObject:(id)arg1 reply:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_qrCodeFeatureFromImage:(struct CGImage *)arg1;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseCodeFromString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage *)arg1 completion:(CDUnknownBlockType)arg2;

@end
