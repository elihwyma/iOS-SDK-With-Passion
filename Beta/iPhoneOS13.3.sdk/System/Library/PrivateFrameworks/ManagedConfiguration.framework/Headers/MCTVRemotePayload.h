/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCTVRemotePayload : MCPayload

{
    NSArray *_allowedTVs;
    NSArray *_allowedRemotes;
}

@property (retain, nonatomic) NSArray *allowedTVs;
@property (retain, nonatomic) NSArray *allowedRemotes;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
