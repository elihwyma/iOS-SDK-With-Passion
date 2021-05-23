/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface HDUserNotification : NSObject

{
    NSString *_title;
    NSString *_message;
    NSString *_defaultButton;
    NSString *_cancelButton;
    NSString *_otherButton;
    NSDictionary *_additionalDescriptors;
    long long _alertLevel;
    unsigned long long _userNotificationOptions;
    CDUnknownBlockType _responseHandler;
    struct __CFUserNotification *_notification;
}

@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (nonatomic) struct __CFUserNotification *notification;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *defaultButton;
@property (copy, nonatomic) NSString *cancelButton;
@property (copy, nonatomic) NSString *otherButton;
@property (copy, nonatomic) NSDictionary *additionalDescriptors;
@property (nonatomic) long long alertLevel;
@property (nonatomic) unsigned long long userNotificationOptions;

- (void)_handleResponse:(unsigned long long)arg1;
- (void)presentWithResponseHandler:(CDUnknownBlockType)arg1;

@end
