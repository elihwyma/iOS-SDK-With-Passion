/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNameItem : _UIStatusBarItem

{
    NSString *_nameEntryKey;
    _UIStatusBarStringView *_nameView;
}

@property (nonatomic, readonly) NSString *nameEntryKey;
@property (retain, nonatomic) _UIStatusBarStringView *nameView;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (id)dependentEntryKeys;
- (void)_create_nameView;

@end
