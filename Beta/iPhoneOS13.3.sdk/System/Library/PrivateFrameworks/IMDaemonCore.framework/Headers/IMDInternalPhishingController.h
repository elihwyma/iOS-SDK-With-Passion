/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMRemoteURLConnection, NSArray;

@protocol OS_dispatch_queue;

@interface IMDInternalPhishingController : NSObject

{
    IMRemoteURLConnection *_remoteURLConnection;
    NSArray *_blacklist;
    double _lastBlacklistSync;
    NSObject<OS_dispatch_queue> *_blacklistDiskQueue;
}

@property (retain) IMRemoteURLConnection *remoteURLConnection;
@property (retain) NSArray *blacklist;
@property double lastBlacklistSync;
@property (retain) NSObject<OS_dispatch_queue> *blacklistDiskQueue;

+ (id)sharedInstance;
+ (_Bool)_isAppleInternal;
+ (_Bool)_hasAppleConnect;
+ (_Bool)allowPhishingCheck;

- (id)init;
- (void)dealloc;
- (id)_endpoint;
- (void)loadBlacklistFromDiskAsync:(_Bool)arg1;
- (void)fetchBlacklistFromNetworkWithCompletion:(CDUnknownBlockType)arg1;
- (id)_apiKey;
- (void)_persistBlacklist:(_Bool)arg1;
- (_Bool)blacklistMessage:(id)arg1;

@end
