/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBStarkBannerItem.h>

@class NCNotificationRequest;

@protocol SBStarkNotificationBannerItemDelegate;

@interface SBStarkNotificationBannerItem : SBStarkBannerItem

{
    NCNotificationRequest *_request;
    id <SBStarkNotificationBannerItemDelegate> _delegate;
}

@property (weak, nonatomic) id <SBStarkNotificationBannerItemDelegate> delegate;
@property (retain, nonatomic) NCNotificationRequest *request;

- (id)timeZone;
- (id)title;
- (CDUnknownBlockType)action;
- (id)initWithConfiguration:(id)arg1;
- (id)message;
- (id)_title;
- (id)iconImages;
- (id)appName;
- (_Bool)isSticky;
- (id)subTitle;
- (id)_subTitle;
- (id)subActions;
- (id)_allActions;
- (_Bool)shouldShowModalSubActions;
- (id)subActionLabels;
- (id)_closeAction;
- (id)_supplementaryActions;
- (long long)defaultActionType;
- (id)initWithRequest:(id)arg1 configuration:(id)arg2;
- (_Bool)matchesContext:(id)arg1;
- (_Bool)_supportsSubActions;
- (void)updateRequestToInstance:(id)arg1;
- (id)sourceDate;
- (_Bool)isSourceDateAllDay;

@end
