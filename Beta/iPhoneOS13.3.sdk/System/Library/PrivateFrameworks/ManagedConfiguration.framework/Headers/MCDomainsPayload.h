/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDomainsPayload : MCPayload

{
    NSDictionary *_restrictions;
}

@property (retain, nonatomic) NSDictionary *restrictions;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)invalidDomainPatternErrorWithPattern:(id)arg1;
+ (_Bool)isPatternValid:(id)arg1 outError:(id *)arg2;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;

@end
