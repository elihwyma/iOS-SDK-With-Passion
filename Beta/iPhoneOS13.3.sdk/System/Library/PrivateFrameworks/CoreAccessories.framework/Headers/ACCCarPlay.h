/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface ACCCarPlay : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)_init;
- (void)isCarPlayPairedWithCertSerial:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)isWirelessCarPlayAllowedForCertSerial:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)carPlayAppLinksStateForCertSerial:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)carPlayIconStateForCertSerial:(id)arg1 andAppCategories:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;

@end
