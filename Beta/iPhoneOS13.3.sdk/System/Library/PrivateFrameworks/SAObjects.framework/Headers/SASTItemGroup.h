/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet

@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSArray *templateItems;

+ (id)itemGroup;
+ (id)itemGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
