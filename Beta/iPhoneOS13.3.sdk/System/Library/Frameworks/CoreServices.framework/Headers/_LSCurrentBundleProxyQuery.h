/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSBundleQuery.h>

__attribute__((visibility("hidden")))
@interface _LSCurrentBundleProxyQuery : _LSBundleQuery

+ (_Bool)supportsSecureCoding;
+ (id)currentBundleProxyQuery;
+ (double)cacheInterval;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
