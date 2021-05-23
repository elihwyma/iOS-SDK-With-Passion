/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions

{
    NSArray *_bundleIDs;
}

@property (nonatomic, readonly) NSArray *bundleIDs;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIDs:(id)arg1;

@end
