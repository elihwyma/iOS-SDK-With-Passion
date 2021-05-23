/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCSharedDeviceConfigurationPayload : MCPayload

{
    NSString *_lockScreenFootnote;
    NSString *_assetTagInformation;
}

@property (nonatomic, readonly) NSString *lockScreenFootnote;
@property (nonatomic, readonly) NSString *assetTagInformation;
@property (nonatomic, readonly) NSDictionary *configuration;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;

@end
