/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload

{
    NSMutableDictionary *_restrictions;
    NSString *_iCloudPassword;
}

@property (retain, nonatomic) NSString *iCloudPassword;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)restrictions;
- (id)filterForUserEnrollmentOutError:(id *)arg1;
- (id)installationWarnings;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_restrictedFeatureStrings;
- (id)_enforcedFeatureStrings;
- (id)_defaultValueRestrictions;
- (id)_intersectionStrings;
- (id)_unionStrings;
- (id)localizedRestrictionStrings;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(_Bool)arg3;

@end
