/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMHome, HMSettings, NSMutableDictionary, NSSet;

@interface HFHomeKitSettingsValueManager : NSObject

{
    HMHome *_home;
    HMSettings *_settings;
    NSMutableDictionary *_transactionStacks;
}

@property (weak, nonatomic) HMHome *home;
@property (retain, nonatomic) HMSettings *settings;
@property (retain, nonatomic) NSMutableDictionary *transactionStacks;
@property (nonatomic, readonly) NSSet *pendingWrites;

- (id)valueForSetting:(id)arg1;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2;
- (id)valueForSettingAtKeyPath:(id)arg1;
- (id)changeValueForSetting:(id)arg1 toValue:(id)arg2 changeType:(unsigned long long)arg3;
- (id)initWithSettings:(id)arg1 home:(id)arg2;
- (id)_valueForSetting:(id)arg1 logRead:(_Bool)arg2;
- (void)_executeNextPendingWriteForSetting:(id)arg1;
- (void)_clearTransaction:(id)arg1;

@end
