/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSession, PSUIAppDescription;

__attribute__((visibility("hidden")))
@interface PSUIAppInstallController : NSObject

{
    NSURLSession *_session;
    int _installState;
    NSString *_appID;
    NSString *_bundleID;
    PSUIAppDescription *_appDescription;
    NSURL *_installURL;
    NSURL *_moreAppsURL;
}

@property (retain) PSUIAppDescription *appDescription;
@property (retain) NSURL *installURL;
@property (retain, nonatomic) NSURL *moreAppsURL;
@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *bundleID;
@property (readonly) int installState;

+ (id)lookupAppDescriptionForInstalledApp:(id)arg1;
+ (id)loadIconFromURL:(id)arg1 session:(id)arg2;
+ (void)saveAppDescriptionToCache:(id)arg1;
+ (void)lookupAppFromStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)tryLoadAppDescriptionFromCache;
+ (id)iconLocalCacheURLFromKey:(id)arg1;

- (void)load;
- (id)specifier;
- (id)initWithBundleID:(id)arg1;
- (void)installButtonTapped:(id)arg1;
- (id)initWithAppID:(id)arg1 carrierMoreAppsURL:(id)arg2;
- (_Bool)moreAppsAvailable;
- (void)moreAppsButtonTapped:(id)arg1;

@end
