/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@interface WFVCalendarContentItem : WFGenericFileContentItem

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;

@end
