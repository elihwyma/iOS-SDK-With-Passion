/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

@class NSArray, NSString;

@interface SASiriKitSetting : AceObject

@property (nonatomic) _Bool applySASToFirstPartyDomains;
@property (copy, nonatomic) NSArray *listOfSiriKitEnabledDomains;
@property (nonatomic) _Bool useSASAutoSelectionFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)siriKitSetting;
+ (id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
