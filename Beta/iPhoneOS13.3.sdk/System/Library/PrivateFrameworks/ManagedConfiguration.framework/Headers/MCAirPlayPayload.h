/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAirPlayPayload : MCPayload

{
    NSArray *_whitelistDestinations;
    NSArray *_destinationsWithPasswords;
    NSArray *_titlesAndDescriptions;
}

@property (retain, nonatomic) NSArray *titlesAndDescriptions;
@property (retain, nonatomic) NSArray *whitelistDestinations;
@property (retain, nonatomic) NSArray *destinationsWithPasswords;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
