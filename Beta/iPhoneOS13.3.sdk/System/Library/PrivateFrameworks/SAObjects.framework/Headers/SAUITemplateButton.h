/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray;

@interface SAUITemplateButton : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *commands;

+ (id)button;
+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
