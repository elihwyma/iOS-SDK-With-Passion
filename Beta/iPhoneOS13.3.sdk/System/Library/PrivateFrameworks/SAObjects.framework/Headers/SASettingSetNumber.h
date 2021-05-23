/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetNumber : SASettingSetValue

@property (nonatomic) _Bool increment;

+ (id)setNumber;
+ (id)setNumberWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
