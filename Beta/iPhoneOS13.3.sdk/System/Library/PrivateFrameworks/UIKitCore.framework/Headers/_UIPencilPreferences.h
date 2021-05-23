/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIPencilPreferences : NSObject

{
    long long _cachedPreferredTapAction;
}

+ (id)sharedPreferences;
+ (long long)preferredTapAction;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)_preferredTapAction;
- (void)_preferredTapActionDidChange;

@end
