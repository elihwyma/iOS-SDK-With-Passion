/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <WebKit/WKWebsiteDataStore.h>

@interface WKWebsiteDataStore (SafariSharedExtras)

+ (id)safari_dataStoreWithConfiguration:(id)arg1;
+ (id)safari_nonPersistentDataStore;
+ (id)safari_defaultDataStoreDisallowingTLSFallback;
+ (id)safari_allDataTypes;
+ (void)safari_clearHSTSSuperCookies;

@end
