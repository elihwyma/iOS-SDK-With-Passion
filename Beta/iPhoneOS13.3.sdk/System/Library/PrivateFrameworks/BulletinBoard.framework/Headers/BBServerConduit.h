/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface BBServerConduit : NSObject

{
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)sharedConduit;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(CDUnknownBlockType)arg2;

@end
