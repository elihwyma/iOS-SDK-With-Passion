/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload

{
    NSArray *_hashDictionaries;
    NSArray *_domainRules;
}

@property (nonatomic, readonly) NSArray *hashDictionaries;
@property (nonatomic, readonly) NSArray *domainRules;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (_Bool)isValidDomainRule:(id)arg1;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)subtitle1Label;

@end
