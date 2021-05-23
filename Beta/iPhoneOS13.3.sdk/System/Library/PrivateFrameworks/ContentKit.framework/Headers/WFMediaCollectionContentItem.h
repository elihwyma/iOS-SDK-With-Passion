/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class MPMediaItemCollection;

@interface WFMediaCollectionContentItem : WFContentItem

@property (nonatomic, readonly) MPMediaItemCollection *collection;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

@end
