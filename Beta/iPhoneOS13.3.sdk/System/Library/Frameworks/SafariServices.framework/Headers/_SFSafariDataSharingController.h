/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject

{
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}

+ (id)sharedController;

- (id)init;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;
- (void)checkInAppBundleIDIfNeeded:(id)arg1;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)clearAllWebsitesData;

@end
