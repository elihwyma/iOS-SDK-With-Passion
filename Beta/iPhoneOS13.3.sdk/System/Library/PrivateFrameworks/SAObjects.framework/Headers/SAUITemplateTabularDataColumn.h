/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSNumber;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (copy, nonatomic) NSNumber *minimumWidth;
@property (copy, nonatomic) NSNumber *rightMargin;
@property (copy, nonatomic) NSArray *values;

+ (id)tabularDataColumn;
+ (id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
