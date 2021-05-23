/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/Swift-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, NSURL;

@protocol RBBundleProperties <Swift>

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

- (MISSING_TYPE *)bundleInfoValuesForKeys: /* Error: Ran out of types for this method. */;

@end
