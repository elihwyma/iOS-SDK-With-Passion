//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _UINavigationControllerPalette;

@interface PXNavigationBannerHelper : NSObject
{
    BOOL _enabled;
    UIViewController *_viewController;
    _UINavigationControllerPalette *_palette;
}

@property(retain, nonatomic) _UINavigationControllerPalette *palette; // @synthesize palette=_palette;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithViewController:(id)arg1;

@end

