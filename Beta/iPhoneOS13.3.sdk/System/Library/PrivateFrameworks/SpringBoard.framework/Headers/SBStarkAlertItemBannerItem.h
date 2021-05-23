/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBStarkBannerItem.h>

@class NSDate, NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem

{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
    NSDate *_originDate;
}

- (void)dealloc;
- (id)category;
- (id)title;
- (unsigned long long)priority;
- (CDUnknownBlockType)action;
- (id)initWithConfiguration:(id)arg1;
- (id)iconImages;
- (id)sound;
- (_Bool)isSticky;
- (id)subActions;
- (id)subActionLabels;
- (long long)defaultActionType;
- (void)reloadDisplayProperties;
- (_Bool)matchesContext:(id)arg1;
- (id)sourceDate;
- (CDUnknownBlockType)ignoreAction;
- (id)initWithAlertItem:(id)arg1 configuration:(id)arg2;

@end
