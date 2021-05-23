/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CHManager, PSConfirmationSpecifier, PSSpecifier;

@protocol PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIResetStatisticsGroup : NSObject

{
    id <PSUIResetStatisticsGroupDelegate> _delegate;
    unsigned long long _policy;
    PSSpecifier *_groupSpecifier;
    PSConfirmationSpecifier *_resetButtonSpecifier;
    CHManager *_callHistoryManager;
}

@property (nonatomic) unsigned long long policy;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (weak, nonatomic) id <PSUIResetStatisticsGroupDelegate> delegate;

- (id)initWithPolicy:(unsigned long long)arg1;
- (id)_lastUpdateDate;
- (id)specifiers;
- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;

@end
