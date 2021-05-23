/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload

{
    MCAPNConfiguration *_attachAPN;
    NSArray *_APNs;
}

@property (retain, nonatomic) MCAPNConfiguration *attachAPN;
@property (retain, nonatomic) NSArray *APNs;

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
- (id)attachAPNConfigurationLabel;
- (id)APNsLabel;
- (id)APNConfigurationDescription;
- (id)APNsDescription;

@end
