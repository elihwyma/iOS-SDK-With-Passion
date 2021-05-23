/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSString;

@interface MCExtensibleSingleSignOnPayload : MCPayload

{
    NSString *_esso_type;
    NSString *_esso_realm;
    NSString *_esso_extensionIdentifier;
    NSString *_esso_teamIdentifier;
    NSDictionary *_esso_extensionData;
    NSArray *_esso_URLs;
    NSArray *_esso_hosts;
}

@property (retain, nonatomic) NSString *esso_type;
@property (retain, nonatomic) NSString *esso_realm;
@property (retain, nonatomic) NSString *esso_extensionIdentifier;
@property (retain, nonatomic) NSString *esso_teamIdentifier;
@property (retain, nonatomic) NSDictionary *esso_extensionData;
@property (retain, nonatomic) NSArray *esso_URLs;
@property (retain, nonatomic) NSArray *esso_hosts;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (_Bool)_validateHost:(id)arg1 outError:(id *)arg2;
- (id)_validateURLString:(id)arg1 outError:(id *)arg2;

@end
