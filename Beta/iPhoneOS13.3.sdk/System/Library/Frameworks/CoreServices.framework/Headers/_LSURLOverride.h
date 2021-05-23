/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSURL;

@interface _LSURLOverride : NSObject

{
    NSURL *_originalURL;
    NSURL *_overrideURL;
}

@property (nonatomic, readonly) NSURL *originalURL;
@property (copy, nonatomic, readonly) NSURL *overrideURL;

+ (id)new;
+ (void)addOverrideBlock:(CDUnknownBlockType)arg1;
+ (void)removeAllOverrideBlocks;
+ (void)setUseMacOverrides:(_Bool)arg1;
+ (void)resetPlatformFlag;
+ (id)fmfURL:(State_0f18e2a3 *)arg1;
+ (id)fmipURL:(State_0f18e2a3 *)arg1;
+ (id)iTunesStoreURL:(State_0f18e2a3 *)arg1;
+ (id)iCloudEmailPrefsURL:(State_0f18e2a3 *)arg1;
+ (id)photosURL:(State_0f18e2a3 *)arg1;
+ (id)keynoteLiveURL:(State_0f18e2a3 *)arg1;
+ (id)keynoteLiveURL_noFragment:(State_0f18e2a3 *)arg1;
+ (id)iCloudSharingURL:(State_0f18e2a3 *)arg1;
+ (id)iCloudSharingURL_noFragment:(State_0f18e2a3 *)arg1;
+ (id)iCloudFamilyURL:(State_0f18e2a3 *)arg1;
+ (id)bizURL:(State_0f18e2a3 *)arg1;
+ (id)iCloudSchoolworkURL:(State_0f18e2a3 *)arg1;

- (id)init;
- (id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(_Bool)arg2 newsOnly:(_Bool)arg3;
- (id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(_Bool)arg2;
- (id)initWithOriginalURL:(id)arg1 newsOnly:(_Bool)arg2;
- (id)initWithOriginalURL:(id)arg1;

@end
