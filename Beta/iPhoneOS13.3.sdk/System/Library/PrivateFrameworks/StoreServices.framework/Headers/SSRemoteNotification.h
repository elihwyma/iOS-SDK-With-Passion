/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface SSRemoteNotification : NSObject

{
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) NSDictionary *notificationUserInfo;
@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) NSString *alertBodyString;
@property (nonatomic, readonly) NSString *alertCancelString;
@property (nonatomic, readonly) NSString *alertOKString;
@property (nonatomic, readonly) NSString *alertTitleString;
@property (nonatomic, readonly) id badgeValue;
@property (nonatomic, readonly) NSString *soundFileName;
@property (nonatomic, readonly) _Bool explicitContent;
@property (nonatomic, readonly) NSString *artworkUrl;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) NSString *tapUrl;
@property (nonatomic, readonly) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)valueForKey:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)_valueForAlertKey:(id)arg1;
- (id)_valueForAPSKey:(id)arg1;

@end
