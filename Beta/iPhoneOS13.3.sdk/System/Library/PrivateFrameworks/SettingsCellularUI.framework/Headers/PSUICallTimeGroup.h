/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CHManager, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICallTimeGroup : NSObject

{
    PSListController *_hostController;
    CHManager *_callHistoryManager;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_currentCallTimeSpecifier;
    PSSpecifier *_lifetimeCallTimeSpecifier;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSSpecifier *currentCallTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *lifetimeCallTimeSpecifier;

- (id)initWithListController:(id)arg1;
- (id)specifiers;
- (id)callTime:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (void)handleCallTimersChanged;
- (id)callTimeDurationRestrictedToCurrentPeriod:(_Bool)arg1;

@end
