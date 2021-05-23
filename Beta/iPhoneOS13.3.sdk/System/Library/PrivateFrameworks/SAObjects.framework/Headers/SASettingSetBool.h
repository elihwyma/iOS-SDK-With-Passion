/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) _Bool toggle;
@property (nonatomic) _Bool value;

+ (id)setBool;
+ (id)setBoolWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
