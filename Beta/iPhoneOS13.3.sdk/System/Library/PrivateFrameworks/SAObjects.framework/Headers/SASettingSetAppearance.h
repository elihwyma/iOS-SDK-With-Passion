/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetValue.h>

@class NSString;

@interface SASettingSetAppearance : SASettingSetValue

@property (copy, nonatomic) NSString *appearance;

+ (id)setAppearance;
+ (id)setAppearanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
