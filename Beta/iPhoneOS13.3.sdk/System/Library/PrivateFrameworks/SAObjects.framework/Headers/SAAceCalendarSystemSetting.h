/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAAceCalendarSystemSetting : SADomainObject

@property (copy, nonatomic) NSString *calendarType;

+ (id)aceCalendarSystemSetting;
+ (id)aceCalendarSystemSettingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
