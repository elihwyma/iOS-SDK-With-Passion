/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASettingGetBool.h>

@interface SASettingGetCellularData : SASettingGetBool

+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
