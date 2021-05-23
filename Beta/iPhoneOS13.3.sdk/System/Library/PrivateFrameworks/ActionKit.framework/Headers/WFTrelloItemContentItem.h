/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFTrelloItemContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)canLowercaseTypeDescription;

- (id)preferredFileType;

@end
