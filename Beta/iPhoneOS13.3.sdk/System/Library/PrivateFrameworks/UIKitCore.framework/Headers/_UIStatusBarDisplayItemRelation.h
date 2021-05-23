/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemRelation : NSObject

@property (nonatomic, readonly, getter=isFulfilled) _Bool fulfilled;
@property (nonatomic, readonly) NSArray *itemStates;

+ (id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2;
+ (id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2;
+ (id)anyRelationWithRelations:(id)arg1;
+ (id)allRelationWithRelations:(id)arg1;

- (id)description;
- (id)type;
- (id)_ui_descriptionBuilder;

@end
