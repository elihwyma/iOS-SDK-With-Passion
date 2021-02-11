/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {
    SBAlertItem * _alertItem;
    NSString * _message;
    NSDate * _originDate;
    SBUISound * _sound;
    NSString * _title;
}

- (void).cxx_destruct;
- (id /* block */)action;
- (id)category;
- (void)dealloc;
- (long long)defaultActionType;
- (id)iconImages;
- (id /* block */)ignoreAction;
- (id)initWithAlertItem:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (bool)isSticky;
- (bool)matchesContext:(id)arg1;
- (unsigned long long)priority;
- (void)reloadDisplayProperties;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end