/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBBundlePropertiesLSProvider, RBLSBundleProperties, RBSProcessIdentifier, RBSProcessIdentity, RBXPCBundleProperties;

@interface RBBundleProperties : NSObject

{
    RBBundlePropertiesLSProvider *_lsProvider;
    RBBundlePropertiesBSXPCProvider *_xpcProvider;
    RBBundlePropertiesBackgroundRefreshProvider *_bgRefreshProvider;
    RBSProcessIdentifier *_processIdentifier;
    RBSProcessIdentity *_processIdentity;
    RBLSBundleProperties *_lsBundleProperties;
    RBXPCBundleProperties *_xpcBundleProperties;
    _Bool _hasFetchedBackgroundRefreshEnabled;
    _Bool _backgroundRefreshEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *bundlePath;
@property (copy, nonatomic, readonly) NSString *executablePath;
@property (copy, nonatomic, readonly) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) _Bool supportsBackgroundContentFetching;
@property (nonatomic, readonly) _Bool supportsBackgroundNetworkAuthentication;
@property (nonatomic, readonly) _Bool supportsBackgroundAudio;
@property (nonatomic, readonly) _Bool supportsUnboundedTaskCompletion;
@property (nonatomic, readonly) _Bool usesSocketMonitoring;
@property (nonatomic, readonly, getter=isBackgroundRefreshEnabled) _Bool backgroundRefreshEnabled;
@property (nonatomic, readonly) int preferredJetsamBand;
@property (nonatomic, readonly) _Bool hasPreferredJetsamBand;
@property (nonatomic, readonly) _Bool isExtension;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)_xpcBundleProperties;
- (id)_lsBundleProperties;
- (id)_bundleProperties;
- (id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 backgroundRefreshProvider:(id)arg3 processIdentity:(id)arg4 processIdentifier:(id)arg5;

@end
