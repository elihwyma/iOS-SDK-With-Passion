/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroEventModifier : NSObject

{
    NSDictionary *_fieldFilters;
    NSString *_sampleSessionKey;
    NSDictionary *_metricsDictionary;
    NSDictionary *_overrideDictionary;
}

@property (nonatomic, readonly) NSDictionary *fieldFilters;
@property (nonatomic, readonly) NSDictionary *metricsDictionary;
@property (nonatomic, readonly) NSDictionary *overrideDictionary;
@property (nonatomic, readonly) NSString *sampleSessionKey;

- (id)reportingURLForEvent:(id)arg1;
- (_Bool)shouldDropEvent:(id)arg1;
- (_Bool)shouldSkipEvent:(id)arg1;
- (id)prepareEvent:(id)arg1;
- (id)_fieldFiltersFromOverrides:(id)arg1;
- (id)_createSampleSessionKey;
- (id)_overridePropertyForKey:(id)arg1;
- (_Bool)_shouldSampleEvent:(id)arg1;
- (id)initWithMetricsDictionary:(id)arg1 matchedOverrideDictionary:(id)arg2;
- (_Bool)fieldFiltersMatchEvent:(id)arg1;

@end
