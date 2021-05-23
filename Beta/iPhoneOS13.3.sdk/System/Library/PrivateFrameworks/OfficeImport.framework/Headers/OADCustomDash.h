/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADDash.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OADCustomDash : OADDash

{
    NSArray *mStops;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stops;
- (void)setStops:(id)arg1;
- (id)initWithDefaults;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (_Bool)areStopsOverridden;

@end
