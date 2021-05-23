/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebSecurityOrigin;

__attribute__((visibility("hidden")))
@interface WebApplicationCacheQuotaManager : NSObject

{
    WebSecurityOrigin *_origin;
}

- (id)origin;
- (unsigned long long)usage;
- (void)setQuota:(unsigned long long)arg1;
- (id)initWithOrigin:(id)arg1;
- (unsigned long long)quota;

@end
