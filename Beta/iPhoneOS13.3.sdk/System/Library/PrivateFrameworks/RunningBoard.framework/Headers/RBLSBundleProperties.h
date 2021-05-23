/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <Foundation/NSObject.h>

@class LSBundleProxy, NSDictionary, NSString, NSURL;

@interface RBLSBundleProperties : NSObject

{
    LSBundleProxy *_proxy;
    _Bool _backgroundRefreshEnabled;
    _Bool _hasPreferredJetsamBand;
    _Bool _supportsBackgroundContentFetching;
    _Bool _supportsBackgroundNetworkAuthentication;
    _Bool _supportsBackgroundAudio;
    _Bool _supportsUnboundedTaskCompletion;
    _Bool _usesSocketMonitoring;
    _Bool _isExtension;
    int _preferredJetsamBand;
    NSString *_identifier;
    NSString *_path;
    NSString *_executablePath;
    NSString *_extensionPointIdentifier;
    NSURL *_dataContainerURL;
    NSDictionary *_environmentVariables;
}

@property (nonatomic, readonly, getter=isBackgroundRefreshEnabled) _Bool backgroundRefreshEnabled;
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
@property (nonatomic, readonly) int preferredJetsamBand;
@property (nonatomic, readonly) _Bool hasPreferredJetsamBand;
@property (nonatomic, readonly) _Bool isExtension;

- (id)bundleInfoValuesForKeys:(id)arg1;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithBundleProxy:(id)arg1;

@end
