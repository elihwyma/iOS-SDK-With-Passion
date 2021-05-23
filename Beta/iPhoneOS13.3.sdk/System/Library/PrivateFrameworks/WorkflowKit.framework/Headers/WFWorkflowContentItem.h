/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class WFWorkflowReference;

@interface WFWorkflowContentItem : WFGenericFileContentItem

@property (nonatomic, readonly) WFWorkflowReference *workflowReference;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end
