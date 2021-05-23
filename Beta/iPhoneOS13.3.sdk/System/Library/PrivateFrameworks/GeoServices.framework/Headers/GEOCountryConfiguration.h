/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, geo_isolater;

@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject

{
    geo_isolater *_isolater;
    NSString *_countryCode;
    NSMutableArray *_updateCompletionHandlers;
    NSMutableDictionary *_supportedFeatures;
    geo_isolater *_currentCountrySupportsNavigationIsolater;
    _Bool _currentCountrySupportsNavigation;
    _Bool _determinedCurrentCountrySupportsNavigation;
    double _urlAuthenticationTimeToLive;
    _Bool _hasURLAuthenticationTimeToLive;
    id <_GEOCountryConfigurationServerProxy> _serverProxy;
}

@property (nonatomic, readonly) _Bool zilchPointsSupported;
@property (nonatomic, readonly) _Bool shouldUseGuidanceEventManager;
@property (nonatomic, readonly) _Bool shouldRequestLaneGuidance;
@property (copy, nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) _Bool currentCountrySupportsTraffic;
@property (nonatomic, readonly) _Bool currentCountrySupportsDirections;
@property (nonatomic, readonly) _Bool currentCountrySupportsNavigation;
@property (nonatomic, readonly) _Bool currentCountrySupportsRouteGenius;
@property (nonatomic, readonly) _Bool currentCountrySupportsCarIntegration;
@property (nonatomic, readonly) _Bool currentCountrySupportsCommute;
@property (nonatomic, readonly) double urlAuthenticationTimeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedConfiguration;
+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long *)arg4 decoder:(CDUnknownBlockType)arg5;
- (_Bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (_Bool)currentCountrySupportsFeature:(long long)arg1;
- (id)_countryCodeOnIsolationQueue;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long *)arg3 decoder:(CDUnknownBlockType)arg4;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3 decoder:(CDUnknownBlockType)arg4;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3;
- (void)_resetSupportedFeatures;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)updateProvidersForCurrentCountry;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(CDUnknownBlockType)arg3;

@end
