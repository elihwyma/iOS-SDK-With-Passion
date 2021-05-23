/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (copy, nonatomic) NSArray *persons;
@property (nonatomic) _Bool showImmediately;

+ (id)personPicker;
+ (id)personPickerWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
