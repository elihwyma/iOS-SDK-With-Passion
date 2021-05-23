/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload

{
    NSArray *_applicationRules;
    NSArray *_SIMRules;
}

@property (copy, nonatomic) NSArray *applicationRules;
@property (copy, nonatomic) NSArray *SIMRules;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;

@end
