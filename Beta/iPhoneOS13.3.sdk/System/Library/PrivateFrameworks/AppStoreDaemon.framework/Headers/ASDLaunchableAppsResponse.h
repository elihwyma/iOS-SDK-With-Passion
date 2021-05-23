/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse

{
    NSArray *_bundleIDs;
}

@property (nonatomic, readonly) NSArray *bundleIDs;
@property _Bool success;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIDs:(id)arg1;

@end
