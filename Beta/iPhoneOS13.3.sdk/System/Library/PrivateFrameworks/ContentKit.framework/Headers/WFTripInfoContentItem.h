/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class WFTripInfo;

@interface WFTripInfoContentItem : WFContentItem

@property (nonatomic, readonly) WFTripInfo *tripInfo;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)distance;
- (id)travelTime;
- (id)routeName;
- (id)arrivalTime;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
