/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <ContentKit/WFContentItem.h>

@class INCustomObject;

@interface WFCustomIntentOutputContentItem : WFContentItem

@property (nonatomic, readonly) INCustomObject *customObject;

+ (id)typeDescription;
+ (id)codableDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
