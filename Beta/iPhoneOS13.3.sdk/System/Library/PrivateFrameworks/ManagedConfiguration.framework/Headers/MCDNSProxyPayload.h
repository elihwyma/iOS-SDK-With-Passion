/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCDNSProxyPayload : MCPayload

{
    NSString *_appBundleIdentifier;
    NSString *_providerBundleIdentifier;
    NSDictionary *_providerConfiguration;
}

@property (copy, nonatomic, readonly) NSDictionary *configurationDictionary;
@property (copy, nonatomic, readonly) NSString *appBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *providerBundleIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *providerConfiguration;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
