/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFTrelloItemContentItem.h>

@interface WFTrelloBoardContentItem : WFTrelloItemContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)board;

@end
