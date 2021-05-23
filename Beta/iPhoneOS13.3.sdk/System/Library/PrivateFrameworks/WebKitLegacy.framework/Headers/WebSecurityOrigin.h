/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject

{
    struct WebSecurityOriginPrivate *_private;
    id <WebQuotaManager> _applicationCacheQuotaManager;
    id <WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)stringValue;
- (id)initWithURL:(id)arg1;
- (id)host;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)usage;
- (id)databaseQuotaManager;
- (void)setQuota:(unsigned long long)arg1;
- (id)applicationCacheQuotaManager;
- (struct SecurityOrigin *)_core;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin *)arg1;
- (id)toString;
- (unsigned long long)quota;
- (id)databaseIdentifier;

@end
