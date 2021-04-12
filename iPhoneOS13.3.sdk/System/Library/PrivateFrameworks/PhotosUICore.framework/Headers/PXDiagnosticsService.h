//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIViewController;

@interface PXDiagnosticsService : NSObject
{
    BOOL _canProvideConsoleDescription;
    BOOL _canProvideSettingsViewController;
    BOOL _canPerformAction;
    NSArray *_itemProviders;
    NSString *_consoleDescription;
    UIViewController *_settingsViewController;
}

@property(readonly, nonatomic) BOOL canPerformAction; // @synthesize canPerformAction=_canPerformAction;
@property(readonly, nonatomic) UIViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(readonly, nonatomic) BOOL canProvideSettingsViewController; // @synthesize canProvideSettingsViewController=_canProvideSettingsViewController;
@property(readonly, nonatomic) NSString *consoleDescription; // @synthesize consoleDescription=_consoleDescription;
@property(readonly, nonatomic) BOOL canProvideConsoleDescription; // @synthesize canProvideConsoleDescription=_canProvideConsoleDescription;
@property(readonly, copy, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
// - (void).cxx_destruct;
- (void)performAction;
@property(readonly, nonatomic) UIViewController *contextualViewController;
@property(readonly, nonatomic) BOOL canProvideContextualViewController;
@property(readonly, nonatomic) NSString *title;
- (id)initWithItemProviders:(id)arg1;
- (id)init;

@end

