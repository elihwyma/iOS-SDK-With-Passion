/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSSet;

@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject

{
    unsigned char _latestHash[32];
    NSDictionary *_appLocation;
    NSSet *_dockedApps;
    NSSet *_folderApps;
    unsigned long long _numFolders;
    unsigned long long _numPages;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSDate *_lastAppIconRefreshTime;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)numberOfPages;
- (void)_reload;
- (id)allAppsOnSpringboard;
- (id)allDockedApps;
- (id)allFolderApps;
- (_Bool)appOnDockWithBundleId:(id)arg1;
- (_Bool)appInFolderWithBundleId:(id)arg1;
- (long long)springboardPageNumberForBundleId:(id)arg1;
- (long long)springboardPageLocationForBundleId:(id)arg1;
- (long long)folderPageNumberForBundleId:(id)arg1;
- (void)parseIconState:(id)arg1;
- (unsigned long long)numberOfApps;
- (unsigned long long)numberOfFolders;
- (void)reloadIfExpired;
- (id)loadIconStateData;

@end
