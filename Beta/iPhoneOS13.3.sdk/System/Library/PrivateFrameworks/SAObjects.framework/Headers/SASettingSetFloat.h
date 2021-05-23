/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetNumber.h>

@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (id)setFloat;
+ (id)setFloatWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
