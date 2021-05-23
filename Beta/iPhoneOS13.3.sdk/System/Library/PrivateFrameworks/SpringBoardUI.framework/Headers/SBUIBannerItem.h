/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@interface SBUIBannerItem : NSObject

- (id)title;
- (unsigned long long)priority;
- (CDUnknownBlockType)action;
- (id)message;
- (id)sound;
- (id)sortDate;
- (_Bool)isSticky;
- (id)subActions;
- (id)actionWithIdentifier:(id)arg1;
- (_Bool)shouldPlayLightsAndSirens;
- (_Bool)canShowInAssistant;
- (_Bool)canShowWhileLocked;
- (_Bool)shouldShowModalSubActions;
- (id)subActionLabels;
- (_Bool)hasSubActions;
- (id)defaultActionWithContext:(id)arg1;
- (id)lockScreenActionContextWithContext:(id)arg1;

@end
