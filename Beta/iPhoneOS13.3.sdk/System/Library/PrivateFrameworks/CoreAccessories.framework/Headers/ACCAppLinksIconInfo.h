/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface ACCAppLinksIconInfo : NSObject

{
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)init;
- (id)_init;
- (void)getIconDataForBundleID:(id)arg1 forIconSize:(double)arg2 withReply:(CDUnknownBlockType)arg3;

@end
