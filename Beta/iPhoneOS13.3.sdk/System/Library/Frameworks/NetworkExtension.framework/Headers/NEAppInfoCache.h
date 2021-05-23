/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NEAppInfoCache : NSObject

{
    CDUnknownBlockType _customLookupHandler;
    NSMutableDictionary *_cachedSourceAppInfo;
}

@property (retain) NSMutableDictionary *cachedSourceAppInfo;
@property (copy, nonatomic) CDUnknownBlockType customLookupHandler;

+ (id)sharedAppInfoCache;

- (id)init;
- (_Bool)appInfo:(id)arg1 mismatchedWithUUID:(id)arg2 andBundleID:(id)arg3;
- (void)addAppInfoToCache:(id)arg1;
- (void)performCustomLookupIfNecessaryForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)setAppInfo:(id)arg1 forUUID:(id)arg2;
- (_Bool)appInfo:(id)arg1 shouldOverwriteAppInfo:(id)arg2;
- (_Bool)bundleID:(id)arg1 matchesBundleID:(id)arg2;
- (id)bundleIDWithoutTeamID:(id)arg1;
- (id)lookupAppInfoForPid:(int)arg1 bundleID:(id)arg2;
- (void)appInfoForPid:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
