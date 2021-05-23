/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UIFocusSoundPlayer;

__attribute__((visibility("hidden")))
@interface _UIFocusSoundGenerator : NSObject

{
    id <_UIFocusSoundPlayer> _focusSoundPlayer;
}

@property (nonatomic, readonly) id <_UIFocusSoundPlayer> focusSoundPlayer;

+ (void)registerURL:(id)arg1 forIdentifier:(id)arg2;
+ (id)defaultGenerator;
+ (void)_uiktest_unregisterURLForIdentifier:(id)arg1;

- (void)playSoundForFocusUpdateInContext:(id)arg1;
- (id)initWithFocusSoundPlayer:(id)arg1;

@end
