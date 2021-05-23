/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateTabularDataGroup.h>

@class NSArray;

@interface SAUITemplateTabularDataRow : SAUITemplateTabularDataGroup

@property (copy, nonatomic) NSArray *actions;

+ (id)tabularDataRow;
+ (id)tabularDataRowWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
