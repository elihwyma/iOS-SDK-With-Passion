/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAPNPayload : MCPayload

{
    NSArray *_apnInfos;
    _Bool _wasInstalled;
}

@property (nonatomic) _Bool wasInstalled;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)apnDomainName;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;
- (_Bool)_checkForValidContents:(id)arg1 outError:(id *)arg2;
- (void)_finishInitializationWithContents:(id)arg1;
- (id)_strippedAPNDefaults;
- (id)apnDefaults;

@end
