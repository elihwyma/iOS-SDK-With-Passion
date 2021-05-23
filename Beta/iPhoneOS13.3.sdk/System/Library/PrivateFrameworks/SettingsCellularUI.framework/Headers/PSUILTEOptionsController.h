/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListItemsController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PSUILTEOptionsController : PSListItemsController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isVoiceEnabled:(id)arg1;
+ (void)setVoice:(id)arg1 enabled:(_Bool)arg2;
+ (_Bool)shouldShowVoiceOptions:(id)arg1;
+ (unsigned long long)voiceAvailability:(id)arg1;
+ (_Bool)isOnCallOfSubType:(struct __CFString *)arg1;
+ (_Bool)isProvisioning:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (void)listItemSelected:(id)arg1;
- (void)updateProvisioning;
- (_Bool)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(CDUnknownBlockType)arg2;
- (void)presentCallCarrierAlert:(id)arg1;

@end
