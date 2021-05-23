/*
 Image: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject

{
    int _processId;
    NSString *_bundleId;
    struct SBSProcessAssertion *_processAssertion;
    long long _processAssertionStartTime;
}

@property (nonatomic, readonly) struct SBSProcessAssertion *processAssertion;
@property (nonatomic, readonly) long long processAssertionStartTime;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) int processId;

- (id)initWithBundleId:(id)arg1;
- (int)_getProcessId;
- (id)_applicationInfoForBundleIDSync:(id)arg1;
- (void)takeProcessAssertion:(id)arg1;
- (void)releaseProcessAssertion;

@end
