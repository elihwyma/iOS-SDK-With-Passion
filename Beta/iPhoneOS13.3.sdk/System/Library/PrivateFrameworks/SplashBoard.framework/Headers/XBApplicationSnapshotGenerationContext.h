/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString, XBApplicationLaunchCompatibilityInfo, XBLaunchStateRequest;

@interface XBApplicationSnapshotGenerationContext : NSObject

{
    XBApplicationLaunchCompatibilityInfo *_applicationCompatibilityInfo;
    XBLaunchStateRequest *_launchRequest;
    double _timeout;
}

@property (nonatomic, readonly) XBApplicationLaunchCompatibilityInfo *applicationCompatibilityInfo;
@property (copy, nonatomic, readonly) XBLaunchStateRequest *launchRequest;
@property (nonatomic, readonly) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3;

@end
