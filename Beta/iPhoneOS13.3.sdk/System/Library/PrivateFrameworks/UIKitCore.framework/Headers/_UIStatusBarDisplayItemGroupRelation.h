/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation

{
    _Bool _requiresAll;
    NSArray *_relations;
}

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) _Bool requiresAll;

- (id)type;
- (id)_ui_descriptionBuilder;
- (_Bool)isFulfilled;
- (id)itemStates;

@end
