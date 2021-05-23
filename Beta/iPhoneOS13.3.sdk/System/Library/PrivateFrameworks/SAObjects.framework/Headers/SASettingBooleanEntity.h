/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) _Bool value;

+ (id)booleanEntity;
+ (id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)booleanEntityWithValue:(_Bool)arg1;

- (id)groupIdentifier;
- (id)initWithValue:(_Bool)arg1;
- (id)encodedClassName;

@end
