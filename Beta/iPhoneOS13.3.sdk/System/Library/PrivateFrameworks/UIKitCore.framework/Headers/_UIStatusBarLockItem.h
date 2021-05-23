/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, NSTimer, _UIExpandingGlyphsView, _UIStatusBarLockView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItem : _UIStatusBarItem

{
    _Bool _showsLock;
    _UIStatusBarLockView *_lockView;
    _UIExpandingGlyphsView *_stringView;
    NSTimer *_lockDisappearanceTimer;
    long long _unlockFailureCount;
}

@property (retain, nonatomic) _UIStatusBarLockView *lockView;
@property (retain, nonatomic) _UIExpandingGlyphsView *stringView;
@property (retain, nonatomic) NSTimer *lockDisappearanceTimer;
@property (nonatomic) _Bool showsLock;
@property (nonatomic) long long unlockFailureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textDisplayIdentifier;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (void)_create_lockView;
- (void)_create_stringView;

@end
