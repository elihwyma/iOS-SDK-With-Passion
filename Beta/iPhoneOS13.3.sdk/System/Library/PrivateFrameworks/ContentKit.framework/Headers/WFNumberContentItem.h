/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class NSNumber;

@interface WFNumberContentItem : WFContentItem

@property (nonatomic, readonly) NSNumber *number;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
