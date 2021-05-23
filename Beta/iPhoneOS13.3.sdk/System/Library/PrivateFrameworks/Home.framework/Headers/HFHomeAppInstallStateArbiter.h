/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSHashTable, NSString, NSURL;

@interface HFHomeAppInstallStateArbiter : NSObject

{
    NSHashTable *_observers;
    NAFuture *_homeAppInstalledFuture;
}

@property (nonatomic, readonly) NSHashTable *observers;
@property (retain, nonatomic) NAFuture *homeAppInstalledFuture;
@property (copy, nonatomic, readonly) NSURL *homeAppBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (_Bool)_fastPath_isHomeAppInstalled;
- (void)_applications:(id)arg1 didInstall:(_Bool)arg2;

@end
