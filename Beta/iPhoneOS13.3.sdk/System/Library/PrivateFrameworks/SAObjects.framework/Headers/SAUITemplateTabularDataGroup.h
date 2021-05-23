/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray;

@interface SAUITemplateTabularDataGroup : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *items;

+ (id)tabularDataGroup;
+ (id)tabularDataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
