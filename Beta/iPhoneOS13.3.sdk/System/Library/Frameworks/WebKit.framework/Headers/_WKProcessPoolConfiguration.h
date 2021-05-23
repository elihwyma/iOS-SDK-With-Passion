/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString, NSURL;

@interface _WKProcessPoolConfiguration : NSObject

{
    struct ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
    _Bool _configureJSCForTesting;
}

@property (copy, nonatomic) NSURL *injectedBundleURL;
@property (copy, nonatomic) NSSet *customClassesForParameterCoder;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) _Bool usesSingleWebProcess;
@property (copy, nonatomic) NSString *customWebContentServiceBundleIdentifier;
@property (nonatomic) _Bool ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic) _Bool attrStyleEnabled;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) unsigned long long wirelessContextIdentifier;
@property (nonatomic) long long diskCacheSizeOverride;
@property (copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property (copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) _Bool diskCacheSpeculativeValidationEnabled;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) _Bool shouldCaptureAudioInUIProcess;
@property (copy, nonatomic) NSString *CTDataConnectionServiceType;
@property (nonatomic) _Bool alwaysRunsAtBackgroundPriority;
@property (nonatomic) _Bool shouldTakeUIBackgroundAssertion;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) _Bool processSwapsOnNavigation;
@property (nonatomic) _Bool alwaysKeepAndReuseSwappedProcesses;
@property (nonatomic) _Bool processSwapsOnWindowOpenWithOpener;
@property (nonatomic) _Bool prewarmsProcessesAutomatically;
@property (nonatomic) _Bool usesWebProcessCache;
@property (nonatomic) _Bool pageCacheEnabled;
@property (nonatomic) _Bool suppressesConnectionTerminationOnSystemChange;
@property (nonatomic, getter=isJITEnabled) _Bool JITEnabled;
@property (nonatomic) unsigned long long downloadMonitorSpeedMultiplierForTesting;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (nonatomic) _Bool configureJSCForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
