/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSHashTable;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPersistentAnimationView : UIView

{
    NSHashTable *_animations;
}

@property (retain, nonatomic) NSHashTable *animations;
@property (copy, nonatomic) NSArray *persistentAnimations;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end
