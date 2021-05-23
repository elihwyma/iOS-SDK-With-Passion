/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString, SSLookupItemOffer;

@protocol OS_dispatch_queue, WLKInstallable;

@interface _WLKAppInstallSession : NSObject

{
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressHandler;
    id <WLKInstallable> _installable;
    SSLookupItemOffer *_offer;
}

@property (nonatomic, readonly) id <WLKInstallable> installable;
@property (nonatomic, readonly) SSLookupItemOffer *offer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_matchingAppProxyFromProxies:(id)arg1 forInstallable:(id)arg2;

- (void)dealloc;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (id)initWithInstallable:(id)arg1 offer:(id)arg2;
- (void)beginInstallationWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_canOpenAppWithBundleID:(id)arg1;
- (void)_sendCompletionWithError:(id)arg1;
- (void)_doPurchaseWithAppAdamID:(id)arg1 offer:(id)arg2;

@end
