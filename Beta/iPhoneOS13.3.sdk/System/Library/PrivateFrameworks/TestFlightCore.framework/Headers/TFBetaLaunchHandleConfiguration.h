/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

#import <TestFlightCore/Swift-Protocol.h>

@class ASDBetaAppLaunchInfo, NSString;

@interface TFBetaLaunchHandleConfiguration : NSObject <Swift>

{
    NSString *_bundleIdentifier;
    ASDBetaAppLaunchInfo *_launchInfo;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) ASDBetaAppLaunchInfo *launchInfo;

+ (id)configurationFromUserInfo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preloadingLaunchInfo:(id)arg2;
- (id)encodedAsUserInfo;

@end
