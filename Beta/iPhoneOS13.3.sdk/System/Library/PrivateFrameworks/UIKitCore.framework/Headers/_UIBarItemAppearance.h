/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIAppearance.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIBarItemAppearance : _UIAppearance

{
    NSArray *_blindViewAppearances;
}

+ (id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2;
+ (id)_rootAppearancesNode;

- (void)dealloc;
- (void)_handleSetterInvocation:(id)arg1;
- (void)_handleGetterInvocation:(id)arg1;

@end
