/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveResourceFilters, GEOResourceManifestConfiguration, NSSet;

@protocol GEOResourceFiltersManagerDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceFiltersManager : NSObject

{
    GEOResourceManifestConfiguration *_configuration;
    GEOActiveResourceFilters *_activeFilters;
    struct os_unfair_lock_s _lock;
    id <GEOResourceFiltersManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <GEOResourceFiltersManagerDelegate> delegate;
@property (nonatomic, readonly) NSSet *activeScales;
@property (nonatomic, readonly) NSSet *activeScenarios;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)_writeToDisk;
- (void)_activateFilters:(CDUnknownBlockType)arg1 setValueBlock:(CDUnknownBlockType)arg2;
- (void)_deactivateFilters:(CDUnknownBlockType)arg1;
- (void)activateScale:(int)arg1;
- (void)deactivateScale:(int)arg1;
- (void)activateScenario:(int)arg1;
- (void)deactivateScenario:(int)arg1;

@end
