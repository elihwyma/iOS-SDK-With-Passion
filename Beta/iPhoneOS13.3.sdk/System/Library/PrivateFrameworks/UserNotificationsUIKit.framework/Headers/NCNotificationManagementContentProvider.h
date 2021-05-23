/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <Foundation/NSObject.h>

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class NCNotificationRequest, NSString;

@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <Swift>

{
    NCNotificationRequest *_notificationRequest;
    id <NCNotificationManagementContentProviderDelegate> _managementDelegate;
}

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id <NCNotificationManagementContentProviderDelegate> managementDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *optionsSummaryTitle;
@property (copy, nonatomic, readonly) NSString *optionsSummaryText;
@property (nonatomic, readonly) unsigned long long numberOfOptionButtons;
@property (nonatomic) _Bool auxiliaryOptionsVisible;

- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 managementDelegate:(id)arg2;
- (void)handleManageAction:(id)arg1;

@end
