/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMTrigger.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HMTrigger (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_requiresConfirmationToRun;
@property (nonatomic, readonly) _Bool hf_isShortcutOwned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;
+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;

- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (unsigned long long)hf_triggerType;
- (_Bool)hf_shouldDisplayTrigger;
- (id)hf_forceDisableReasons;

@end
