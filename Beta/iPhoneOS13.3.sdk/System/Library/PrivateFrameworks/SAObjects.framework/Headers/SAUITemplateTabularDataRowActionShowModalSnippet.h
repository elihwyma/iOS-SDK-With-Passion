/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateTabularDataRowAction.h>

@protocol SAServerBoundCommand;

@interface SAUITemplateTabularDataRowActionShowModalSnippet : SAUITemplateTabularDataRowAction

@property (retain, nonatomic) id <SAServerBoundCommand> fetchContentCommand;

+ (id)tabularDataRowActionShowModalSnippet;
+ (id)tabularDataRowActionShowModalSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
