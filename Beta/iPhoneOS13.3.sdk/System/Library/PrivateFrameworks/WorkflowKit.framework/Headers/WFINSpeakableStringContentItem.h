/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <ContentKit/WFContentItem.h>

@class INSpeakableString;

@interface WFINSpeakableStringContentItem : WFContentItem

@property (nonatomic, readonly) INSpeakableString *speakableString;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
