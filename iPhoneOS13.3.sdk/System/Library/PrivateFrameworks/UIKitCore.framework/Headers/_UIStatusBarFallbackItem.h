//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFallbackItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_label;
}

@property(retain, nonatomic) _UIStatusBarStringView *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_label;
- (BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;

@end

