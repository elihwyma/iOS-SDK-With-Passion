//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIBannerItem : NSObject
{
}

- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (BOOL)hasSubActions;
- (id)subActions;
- (id)subActionLabels;
- (BOOL)shouldShowModalSubActions;
- (id)message;
- (id)title;
- (BOOL)canShowWhileLocked;
- (BOOL)shouldPlayLightsAndSirens;
- (BOOL)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (id /* CDUnknownBlockType */)action;
- (BOOL)isSticky;
- (NSUInteger)priority;

@end

