/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PEPServiceConfiguration : NSObject

{
    NSString *_cacheFilePath;
    _Bool _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_postNotification;
- (_Bool)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)_updateDefaults:(id)arg1;
- (_Bool)registerNetworkDefaultsForAppID:(id)arg1;

@end
