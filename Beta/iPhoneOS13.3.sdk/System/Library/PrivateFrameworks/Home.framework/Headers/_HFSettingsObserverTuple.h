/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HMSetting, HMSettings, NADeallocationSentinel, NSString;

@protocol HFHomeKitSettingsObserver, _HFSettingsObserverTupleOwning;

@interface _HFSettingsObserverTuple : NSObject <Swift>

{
    HMSettings *_settings;
    HMSetting *_setting;
    id <HFHomeKitSettingsObserver> _observer;
    id <_HFSettingsObserverTupleOwning> _owner;
    NADeallocationSentinel *_observerDeallocationSentinel;
}

@property (retain, nonatomic) HMSettings *settings;
@property (retain, nonatomic) HMSetting *setting;
@property (weak, nonatomic) id <HFHomeKitSettingsObserver> observer;
@property (weak, nonatomic) id <_HFSettingsObserverTupleOwning> owner;
@property (retain, nonatomic) NADeallocationSentinel *observerDeallocationSentinel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsWillUpdate:(id)arg1;
- (id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;
- (void)_accessorySettingDidUpdate:(id)arg1;
- (void)_accessorySettingReflectionStateDidUpdate:(id)arg1;

@end
