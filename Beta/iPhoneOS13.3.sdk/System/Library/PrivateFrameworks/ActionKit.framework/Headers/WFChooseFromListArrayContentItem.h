/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@class NSArray;

@interface WFChooseFromListArrayContentItem : WFContentItem

@property (nonatomic, readonly) NSArray *items;

+ (id)ownedTypes;
+ (id)itemWithObjects:(id)arg1 named:(id)arg2;
+ (id)itemWithItems:(id)arg1 named:(id)arg2;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;

@end
