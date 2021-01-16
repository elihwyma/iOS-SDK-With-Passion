//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPButton.h>

@class CCUICAPackageView;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingButtonView : MPButton
{
    BOOL _userInterfaceStyleSwitchingEnabled;
    long long _currentMode;
    long long _deviceType;
    CCUICAPackageView *_packageView;
}

@property(retain, nonatomic) CCUICAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) BOOL userInterfaceStyleSwitchingEnabled; // @synthesize userInterfaceStyleSwitchingEnabled=_userInterfaceStyleSwitchingEnabled;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) long long currentMode; // @synthesize currentMode=_currentMode;
// - (void).cxx_destruct;
- (void)_updateGlyphState;
- (void)_updateGlyphPackage;
- (id)_glyphResource;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
