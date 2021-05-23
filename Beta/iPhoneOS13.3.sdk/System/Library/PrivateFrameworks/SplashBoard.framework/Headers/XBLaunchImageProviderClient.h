/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <FrontBoardServices/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient

{
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}

+ (void)preheatServiceWithTimeout:(double)arg1;

- (id)init;
- (id)initWithApplicationInfo:(id)arg1;
- (unsigned int)generateImageWithContext:(id)arg1 error:(id *)arg2;

@end
