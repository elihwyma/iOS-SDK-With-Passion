/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface GEODataURLSessionTaskIdentifier : NSObject

{
    long long _sessionIdentity;
    unsigned long long _taskIdentifier;
    unsigned long long _hash;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 task:(id)arg2;

@end
