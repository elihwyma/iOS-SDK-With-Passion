/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class ASDSystemAppRequest, LSApplicationProxy, NAFuture, NSMutableSet, NSString;

@interface HFHomeAppInstallController : NSObject

{
    NAFuture *_activeHomeAppDownloadFuture;
    ASDSystemAppRequest *_request;
    long long _lastReportedStatus;
    NSMutableSet *_statusUpdaters;
}

@property (nonatomic, readonly) LSApplicationProxy *appProxy;
@property (retain, nonatomic) ASDSystemAppRequest *request;
@property (retain, nonatomic) NAFuture *activeHomeAppDownloadFuture;
@property (nonatomic) long long lastReportedStatus;
@property (nonatomic, readonly) NSMutableSet *statusUpdaters;
@property (nonatomic, readonly) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_cleanup;
- (void)request:(id)arg1 didCompleteWithError:(id)arg2;
- (_Bool)_isHomeAppInstalled;
- (void)_dispatchStatusUpdate:(long long)arg1;
- (id)downloadHomeAppWithUpdateBlock:(CDUnknownBlockType)arg1;

@end
