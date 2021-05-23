/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject

{
    NSData *_iosDeviceToken;
    NSString *_gcmRegistrationId;
}

@property (retain, nonatomic) NSData *iosDeviceToken;
@property (retain, nonatomic) NSString *gcmRegistrationId;

+ (id)structName;
+ (id)structFields;

@end
