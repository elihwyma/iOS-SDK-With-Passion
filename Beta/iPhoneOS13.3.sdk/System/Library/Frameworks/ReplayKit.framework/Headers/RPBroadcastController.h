/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, RPBroadcastViewController;

@protocol RPBroadcastControllerDelegate;

@interface RPBroadcastController : NSObject

{
    NSDictionary *_serviceInfo;
    id <RPBroadcastControllerDelegate> _delegate;
    NSString *_broadcastExtensionBundleID;
    NSString *_broadcastExtensionBundleIdentifier;
    RPBroadcastViewController *_broadcastViewController;
}

@property (retain, nonatomic) NSDictionary *serviceInfo;
@property (retain, nonatomic) NSURL *broadcastURL;
@property (retain, nonatomic) NSString *broadcastExtensionBundleIdentifier;
@property (nonatomic, readonly) RPBroadcastViewController *broadcastViewController;
@property (nonatomic, readonly, getter=isBroadcasting) _Bool broadcasting;
@property (nonatomic, readonly, getter=isPaused) _Bool paused;
@property (weak, nonatomic) id <RPBroadcastControllerDelegate> delegate;
@property (nonatomic, readonly) NSString *broadcastExtensionBundleID;

- (id)init;
- (void)dealloc;
- (void)startBroadcastWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 broadcastViewController:(id)arg3;
- (id)initWithCurrentSession;
- (void)pauseBroadcast;
- (void)resumeBroadcast;
- (void)finishBroadcastWithHandler:(CDUnknownBlockType)arg1;

@end
