/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary;

@interface MCDefaultsPayload : MCPayload

{
    NSDictionary *_defaultsByDomain;
}

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (_Bool)isAllowedToWriteDefaults;
- (id)domains;
- (id)defaultsForDomain:(id)arg1;

@end
