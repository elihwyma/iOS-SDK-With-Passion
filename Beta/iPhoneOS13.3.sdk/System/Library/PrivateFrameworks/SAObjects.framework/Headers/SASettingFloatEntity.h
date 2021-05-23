/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingNumericEntity.h>

@class NSNumber;

@interface SASettingFloatEntity : SASettingNumericEntity

@property (copy, nonatomic) NSNumber *previousValue;
@property (nonatomic) float value;

+ (id)floatEntity;
+ (id)floatEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)floatEntityWithValue:(float)arg1;

- (id)groupIdentifier;
- (id)initWithValue:(float)arg1;
- (id)encodedClassName;

@end
