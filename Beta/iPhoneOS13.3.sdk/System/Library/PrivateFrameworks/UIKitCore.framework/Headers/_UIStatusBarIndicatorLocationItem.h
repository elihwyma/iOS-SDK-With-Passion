/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarIndicatorLocationItem : _UIStatusBarIndicatorItem

{
    long long _previousType;
}

@property (nonatomic) long long previousType;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)indicatorEntryKey;
- (id)imageNameForUpdate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;

@end
