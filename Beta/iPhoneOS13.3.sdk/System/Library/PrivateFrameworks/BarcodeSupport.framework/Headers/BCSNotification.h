/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSAction, BCSNotificationIcon, NSMutableDictionary, NSString, UNNotificationRequest;

@interface BCSNotification : NSObject

{
    BCSAction *_action;
    NSString *_identifier;
    BCSNotificationIcon *_attachmentIcon;
    NSMutableDictionary *_localActions;
    int _requestingProcessID;
}

@property (nonatomic, readonly) long long codeType;
@property (nonatomic, readonly) UNNotificationRequest *request;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) int requestingProcessID;
@property (nonatomic, readonly) _Bool canHandleActionLocally;

+ (id)tempVCardFileURL;
+ (id)notificationForAction:(id)arg1;
+ (id)_tlAlertConfiguration;

- (id)_title;
- (id)_content;
- (id)_defaultURL;
- (id)_initWithAction:(id)arg1;
- (id)_actionTypeStringForQRCode;
- (id)_actionTypeStringForNFC;
- (_Bool)_shouldRequireUserToPickTargetApp;
- (id)_notificationActionFromActionPickerItem:(id)arg1;
- (_Bool)_shouldHandleActionPickerItemLocally:(id)arg1;
- (id)_actionDescriptionString;
- (_Bool)_contentIsPreviewable;
- (_Bool)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (id)_supplementActions;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (_Bool)shouldHandleBulletinActionWithIdentifier:(id)arg1;
- (void)_handleCalendarEventWithICSString:(id)arg1;
- (void)_performActionAfterUnlock:(CDUnknownBlockType)arg1;
- (void)_handleContactInfo:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_contentExtensionData;
- (id)_attachmentIconURL;
- (_Bool)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;

@end
