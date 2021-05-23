/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_nw_path_evaluator;

__attribute__((visibility("hidden")))
@interface PSGAutomaticContentDownloadController : PSListController

{
    id _settingsChangedObserver;
    _Bool _inLowDataMode;
    NSMutableArray *_applications;
    NSMutableDictionary *_applicationStates;
    NSObject<OS_nw_path_evaluator> *_defaultPathEvaluator;
}

@property (retain, nonatomic) NSMutableArray *applications;
@property (retain, nonatomic) NSMutableDictionary *applicationStates;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *defaultPathEvaluator;
@property (nonatomic) _Bool inLowDataMode;

- (id)init;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)whitelist;
- (id)specifiers;
- (void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)applicationEnabled:(id)arg1;
- (void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2;
- (id)backgroundRefreshState:(id)arg1;

@end
