/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingEntity.h>

@class NSString;

@interface SASettingAppearanceEntity : SASettingEntity

@property (copy, nonatomic) NSString *previousValue;
@property (copy, nonatomic) NSString *value;

+ (id)appearanceEntity;
+ (id)appearanceEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
