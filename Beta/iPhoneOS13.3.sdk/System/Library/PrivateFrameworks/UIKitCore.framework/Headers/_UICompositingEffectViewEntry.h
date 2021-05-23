/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry

{
    NSString *_filterType;
}

@property (copy, nonatomic) NSString *filterType;

- (id)description;
- (void)removeEffectFromView:(id)arg1;
- (_Bool)canTransitionToEffect:(id)arg1;
- (void)addEffectToView:(id)arg1;
- (_Bool)isSameTypeOfEffect:(id)arg1;

@end
