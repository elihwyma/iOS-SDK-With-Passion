/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BCSParsingServiceConnection : NSObject

{
    NSXPCConnection *_parsingServiceConnection;
}

@property (retain, nonatomic) NSXPCConnection *parsingServiceConnection;

- (void)dealloc;
- (void)parseQRCodeString:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)parseQRCodeMetadata:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)parseQRCodeFeature:(id)arg1 withReply:(CDUnknownBlockType)arg2;

@end
