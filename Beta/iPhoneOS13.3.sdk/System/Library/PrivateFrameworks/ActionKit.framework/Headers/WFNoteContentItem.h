/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFNoteContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (id)modificationDate;
- (id)creationDate;
- (id)body;
- (id)note;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)fullText;

@end
